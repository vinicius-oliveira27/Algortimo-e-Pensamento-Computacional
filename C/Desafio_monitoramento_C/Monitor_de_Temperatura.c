#include <stdio.h>

int main() {
    float limite, temperatura;
    float soma = 0, maior, menor, media;
    int quantidade = 0;
    int superado = 0;
    int vezes = 0;

    // Validação do limite
    do {
        printf("\n/// Monitor de Temperatura ///\n");
        printf("Digite o limite de temperatura: \n");
        scanf("%f", &limite);

        if (limite < 0) {
            printf("Limite inválido!\n");
        }

    } while (limite < 0);

    // Leitura das temperaturas
    while (vezes < 3) {

        printf("Digite a temperatura: ");
        
        //Enquanto houver letra na resposta do usuário, o programa vai informar que a entrada é inválida.

        if (scanf("%f", &temperatura) != 1) {
            printf("Temperatura inválida! Utilize valores. ex: 12, 43.5\n");
            while (getchar() != '\n');
            continue;
        }

        // Primeira temperatura
        if (quantidade == 0) {
            maior = temperatura;
            menor = temperatura;
        }
        
        soma += temperatura;
        quantidade++;

        // Maior e menor temperatura
        if (temperatura > maior) {
            maior = temperatura;
        }

        if (temperatura < menor) {
            menor = temperatura;
        }

        // Verifica o limite
        if (temperatura > limite) {
            superado++;
            vezes++;
        }
    }

    media = soma / quantidade;

    // Relatório final
    printf("\n--- RELATÓRIO ---\n");
    printf("Quantidade de medições: %d\n", quantidade);
    printf("Média: %.2f\n", media);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);
    printf("Temperaturas acima do limite: %d\n", superado);

    return 0;
}
