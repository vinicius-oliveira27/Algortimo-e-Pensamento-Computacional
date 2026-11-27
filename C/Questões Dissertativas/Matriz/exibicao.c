#include "matrizes.h"

void exibirMatriz(float m[MAX][MAX], int l, int c) {

    for (int i = 0; i < l; i++) {

        for (int j = 0; j < c; j++) {
            printf("%8.2f", m[i][j]);
        }

        printf("\n");
    }
}

void exibirTodasMatrizes(int quantidade) {

    for (int m = 0; m < quantidade; m++) {

        printf("\nMatriz %d:\n", m + 1);

        exibirMatriz(matrizes[m], linhas[m], colunas[m]);
    }
}