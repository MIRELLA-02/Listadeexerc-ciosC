#include <stdio.h>

 typedef struct Aluno {
    char nome[50];
    int idade;
    float nota;
}Aluno;

int main() {
    struct Aluno aluno;

    printf("Digite o nome do aluno:\n ");
    scanf("%s", aluno.nome);

    printf("Digite a idade do aluno:\n");
    scanf("%d", &aluno.idade);

    printf("Digite a nota do aluno:\n");
    scanf("%f", &aluno.nota);

    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f\n", aluno.nota);

    return 0;
}
//Utilizando o struct, criei uma estrutura chamada Aluno, contendo: nome, idade e nota, e usei scanf para ler os dados do teclado. Depois, imprimi essas informações na tela com printf.








