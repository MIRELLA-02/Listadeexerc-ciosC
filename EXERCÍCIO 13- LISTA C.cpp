#include <stdio.h>

int main() {
    int numeros[10], i, contador = 0;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d:\n", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            contador++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", contador);

    return 0;
}

// No inicio do código o sistema irá armazenar os numeros[10] digitados pelo usuário, logo após, irá verifica quais são pares, utilizando o if e conta quantos números pares foram digitados utilizando o for. Depois, exibe o total de números pares encontrados.