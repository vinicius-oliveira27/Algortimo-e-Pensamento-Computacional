#include "matrizes.h"

// Variaveis globais
float matrizes[MAX_MATRIZES][MAX][MAX];
int linhas[MAX_MATRIZES];
int colunas[MAX_MATRIZES];

int main() {

    int quantidade;
    int opcao;

    // Cadastro das matrizes
    quantidade = lerQuantidade();

    lerMatrizes(quantidade);

    // Menu principal
    do {

        printf("\n========== MENU ==========\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao matricial\n");
        printf("5 - Exibir matrizes\n");
        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
            case 2:
            case 3:
            case 4:
                realizarOperacao(quantidade, opcao);
                break;

            case 5:
                exibirTodasMatrizes(quantidade);
                break;

            case 0:
                printf("\nPrograma encerrado!\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}