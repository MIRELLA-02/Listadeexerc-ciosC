#include <stdio.h>

int main() {
    int num, i;
    int maior, menor;

    printf("Digite o primeiro número:\n ");
    scanf("%d", &num);
    maior = num;
    menor = num;
    
    for (int i = 2; i <= 10; i++) {
        printf("Digite os demais numeros:\n", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }

        if (num < menor) {
            menor = num;
        }
    }

    printf("\nMaior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}
//Utilizando o for e o if, o código solicita ao usuário 10 números, identifica o maior e o menor entre eles e exibe o resultado.
