#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
};

int main() {
    struct Aluno alunos[3]; 
    int i, buscadamat;

     for (i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d:\n", i + 1);
        scanf("%s", alunos[i].nome);  
        printf("Digite a matrícula do aluno %d:\n", i + 1);
        scanf("%d", &alunos[i].matricula);  
    }

    printf("Digite a matrícula para buscar:\n");
    scanf("%d", &buscadamat);

    for (i = 0; i < 3; i++) {
        if (alunos[i].matricula == buscadamat) {
            printf("Aluno encontrado: %s, Matrícula: %d\n", alunos[i].nome, alunos[i].matricula);
            return 0;  
        }
    }

    printf("Aluno e matrícula não encontrados!\n");  

    return 0;
}
// Utilizando a estrutura struct, o código armazena nome matrícula de 3 alunos e permite buscar um aluno pela matrícula digitada, exibindo seu nome se encontrado ou uma mensagem de erro caso contrário.
