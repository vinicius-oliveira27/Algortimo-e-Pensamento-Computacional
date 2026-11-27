#include "matrizes.h"

int lerQuantidade() {
    int quantidade;

    do {
        printf("Quantidade de matrizes (2 a 10): ");
        scanf("%d", &quantidade);

        if (quantidade < 2 || quantidade > MAX_MATRIZES) {
            printf("Quantidade invalida!\n");
        }

    } while (quantidade < 2 || quantidade > MAX_MATRIZES);

    return quantidade;
}

void lerMatrizes(int quantidade) {

    for (int m = 0; m < quantidade; m++) {

        printf("\nCadastro da matriz %d\n", m + 1);

        do {
            printf("Quantidade de linhas: ");
            scanf("%d", &linhas[m]);

            printf("Quantidade de colunas: ");
            scanf("%d", &colunas[m]);

            if (linhas[m] < 1 || linhas[m] > MAX ||
                colunas[m] < 1 || colunas[m] > MAX) {
                printf("Dimensoes invalidas!\n");
            }

        } while (linhas[m] < 1 || linhas[m] > MAX ||
                 colunas[m] < 1 || colunas[m] > MAX);

        for (int i = 0; i < linhas[m]; i++) {
            for (int j = 0; j < colunas[m]; j++) {

                printf("Elemento [%d][%d]: ", i + 1, j + 1);
                scanf("%f", &matrizes[m][i][j]);

            }
        }
    }
}
