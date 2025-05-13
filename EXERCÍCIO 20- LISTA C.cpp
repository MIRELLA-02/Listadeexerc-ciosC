#include <stdio.h>

struct Aluno {
    char nome[50];
    float media;
}Aluno;

int main() {
    struct Aluno alunos[5];
    int i;
    float somamedias = 0, mediageral;

    
    for (i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d\n", i + 1);
        scanf("%s", alunos[i].nome);  

        printf("Digite a média final do aluno %d\n", i + 1);
        scanf("%f", &alunos[i].media);  
        
        somamedias += alunos[i].media;  
    }
    
    mediageral = somamedias / 5;

    printf("A média geral da turma é: %.2f\n", mediageral);

    return 0;
}
