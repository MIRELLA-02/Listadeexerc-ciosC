#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
}Pessoa;

int main() {
    struct Pessoa pessoa1, pessoa2;

    
    printf("Digite o nome da primeira pessoa:\n");
    scanf("%s", pessoa1.nome);
    printf("Digite a idade da primeira pessoa:\n");
    scanf("%d", &pessoa1.idade);

    printf("Digite o nome da segunda pessoa:\n");
    scanf("%s", pessoa2.nome);
    printf("Digite a idade da segunda pessoa:\n");
    scanf("%d", &pessoa2.idade);

    if (pessoa1.idade > pessoa2.idade) {
        printf("%s é mais velha(o)!\n", pessoa1.nome);
    } 
     else {
        printf("%s é mais velha(o)!\n", pessoa2.nome);
    }

    return 0;
}
// Utilizando o struct este código cria uma estrutura para armazenar nome e idade de duas pessoas, lê o nome e a idade delas e compara quem é mais velha. No final, imprime quem é mais velha.