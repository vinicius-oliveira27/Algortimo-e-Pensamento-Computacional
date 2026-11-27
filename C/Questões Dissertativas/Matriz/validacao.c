#include "matrizes.h"

// Verifica se as matrizes possuem dimensoes iguais
int validarDimensoes(int l1, int c1, int l2, int c2) {

    return l1 == l2 && c1 == c2;
}

// Verifica se a multiplicacao e possivel
int validarMultiplicacao(int c1, int l2) {

    return c1 == l2;
}

// Verifica se a matriz quadrada possui inversa
int validarInversa(float a[MAX][MAX], int n) {

    float temp[MAX][MAX];

    // Copia a matriz original
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = a[i][j];
        }
    }

    // Eliminacao de Gauss
    for (int i = 0; i < n; i++) {

        int pivo = i;

        // Procura o maior pivo
        for (int k = i + 1; k < n; k++) {
            if (fabs(temp[k][i]) > fabs(temp[pivo][i])) {
                pivo = k;
            }
        }

        // Verifica se o pivo e zero
        if (fabs(temp[pivo][i]) < EPSILON) {
            return 0;
        }

        // Troca as linhas
        for (int j = 0; j < n; j++) {
            float aux = temp[i][j];
            temp[i][j] = temp[pivo][j];
            temp[pivo][j] = aux;
        }

        // Zera os elementos abaixo do pivo
        for (int k = i + 1; k < n; k++) {

            float fator = temp[k][i] / temp[i][i];

            for (int j = i; j < n; j++) {
                temp[k][j] -= fator * temp[i][j];
            }
        }
    }
    return 1;
}