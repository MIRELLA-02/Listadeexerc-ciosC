#include <stdio.h>

int main() {
    float num, soma = 0, med;
    int i;

    for (i = 0; i < 10; i++) { 
        printf("Digite o número %d:\n", i + 1);
        
        if (scanf("%f", &num) != 1) {
            printf("Entrada inválida. Tente novamente.\n");
            return 1;
        }

        soma += num;
    }

    med = soma / 10;
    printf("A média dos 10 números é: %.2f\n", med);

    return 0;
}
//Utilizando a estrutura d for, o código pede ao usuário 10 números, soma eles e calcula a média. Além disso, verifica se a entrada é válida antes de realizar o cálculo.