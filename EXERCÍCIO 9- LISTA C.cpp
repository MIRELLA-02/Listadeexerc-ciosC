#include <stdio.h>

int main() {
    int n1, n2, opçao, soma, sub;

    printf("Informe dois números:\n");
    scanf("%d %d", &n1, &n2);

    do {
        printf("\n--- Menu ---\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opçao);

        switch (opçao) {
            case 1:
                soma = n1 + n2;
                printf("Resultado da soma: %d\n", soma);
                break;

            case 2:
                sub = n1 - n2;
                printf("Resultado da subtração: %d\n", sub);
                break;

            case 3:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opçao != 3);

    return 0;
}

// Neste caso, foi utilizado o do/ switch- estrutura de escolha. Primeiro solicitará ao usuário dois números, irá ler estes números e guardá-los. Depois, com a estrutura do switch, mostrará na tela as opções dadas( soma, subtração ou sair), e o código rodará conforme a opção escolhida


      


    
   

    

    