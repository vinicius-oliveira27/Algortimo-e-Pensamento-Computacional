#include "matrizes.h"

// ADICAO
void somar(float a[MAX][MAX], float b[MAX][MAX],
           float r[MAX][MAX], int l, int c) {

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            r[i][j] = a[i][j] + b[i][j];
        }
    }
}

// SUBTRACAO
void subtrair(float a[MAX][MAX], float b[MAX][MAX],
              float r[MAX][MAX], int l, int c) {

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            r[i][j] = a[i][j] - b[i][j];
        }
    }
}

// MULTIPLICACAO
void multiplicar(float a[MAX][MAX], float b[MAX][MAX],
                 float r[MAX][MAX], int l, int c, int p) {

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < p; j++) {

            r[i][j] = 0;

            for (int k = 0; k < c; k++) {
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// INVERSAO PELO METODO DE GAUSS-JORDAN
void inverter(float a[MAX][MAX], float r[MAX][MAX], int n) {

    float aux[MAX][2 * MAX];

    // Monta a matriz aumentada [A | I]
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            aux[i][j] = a[i][j];
            aux[i][j + n] = (i == j) ? 1 : 0;
        }
    }

    for (int i = 0; i < n; i++) {

        int pivo = i;

        // Procura o maior pivo
        for (int k = i + 1; k < n; k++) {
            if (fabs(aux[k][i]) > fabs(aux[pivo][i])) {
                pivo = k;
            }
        }

        // Troca as linhas
        for (int j = 0; j < 2 * n; j++) {
            float temp = aux[i][j];
            aux[i][j] = aux[pivo][j];
            aux[pivo][j] = temp;
        }

        // Normaliza a linha do pivo
        float valor = aux[i][i];

        for (int j = 0; j < 2 * n; j++) {
            aux[i][j] /= valor;
        }

        // Zera os outros elementos da coluna
        for (int k = 0; k < n; k++) {

            if (k != i) {

                float fator = aux[k][i];

                for (int j = 0; j < 2 * n; j++) {
                    aux[k][j] -= fator * aux[i][j];
                }
            }
        }
    }

    // Copia a inversa para a matriz resultado
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            r[i][j] = aux[i][j + n];
        }
    }
}

// CONTROLE DAS OPERACOES
void realizarOperacao(int quantidade, int opcao) {

    float resultado[MAX][MAX];
    float temporaria[MAX][MAX];
    float inversa[MAX][MAX];

    int l = linhas[0];
    int c = colunas[0];

    // Copia a primeira matriz
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            resultado[i][j] = matrizes[0][i][j];
        }
    }

    // Percorre as demais matrizes
    for (int m = 1; m < quantidade; m++) {

        if (opcao == 1 || opcao == 2) {

            if (!validarDimensoes(l, c, linhas[m], colunas[m])) {
                printf("\nErro: dimensoes diferentes!\n");
                return;
            }

            if (opcao == 1) {
                somar(resultado, matrizes[m], temporaria, l, c);
            } else {
                subtrair(resultado, matrizes[m], temporaria, l, c);
            }

        } else if (opcao == 3) {

            if (!validarMultiplicacao(c, linhas[m])) {
                printf("\nErro: multiplicacao impossivel!\n");
                return;
            }

            multiplicar(resultado, matrizes[m], temporaria,
                        l, c, colunas[m]);

            c = colunas[m];

        } else if (opcao == 4) {

            if (linhas[m] != colunas[m]) {
                printf("\nErro: matriz divisora nao e quadrada!\n");
                return;
            }

            if (!validarMultiplicacao(c, linhas[m])) {
                printf("\nErro: dimensoes incompatíveis!\n");
                return;
            }

            if (!validarInversa(matrizes[m], linhas[m])) {
                printf("\nErro: matriz singular, nao possui inversa!\n");
                return;
            }

            inverter(matrizes[m], inversa, linhas[m]);

            multiplicar(resultado, inversa, temporaria,
                        l, c, colunas[m]);

            c = colunas[m];
        }

        // Atualiza o resultado da operacao
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < c; j++) {
                resultado[i][j] = temporaria[i][j];
            }
        }
    }

    printf("\nResultado da operacao:\n");
    exibirMatriz(resultado, l, c);
}