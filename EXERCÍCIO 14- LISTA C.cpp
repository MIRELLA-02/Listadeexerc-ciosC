#include <stdio.h>

int main() {
    int numeros[5], i;

    printf("Digite 5 numeros:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d\n",i+1);
        scanf("%d", &numeros[i]);
    }

    printf("O vetor invertido é:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d", numeros[i]);
    }
    printf("\n");

    return 0;
}

//Este código, utilizando o for, lê cinco números que o usuário digita e os armazena em um vetor. Depois, imprime esses números na ordem inversa, começando do último número até o primeiro.