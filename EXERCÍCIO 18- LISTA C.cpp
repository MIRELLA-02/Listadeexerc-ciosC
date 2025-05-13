#include <stdio.h>

struct Aluno {
    char nome[50];
    float nota1, nota2, nota3;
}Aluno;

int main() {
    float med;
    struct Aluno aluno;

    printf("Digite o nome do aluno:\n");
    scanf("%s", aluno.nome);
    printf("Digite a primeira nota:\n");
    scanf("%f", &aluno.nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &aluno.nota2);
    printf("Digite a terceira nota:\n");
    scanf("%f", &aluno.nota3);


     med = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;

   
    if (med >= 6) {
        printf("%s está aprovado, com média de %.2f.\n", aluno.nome, med);
    } else {
        printf("%s está reprovado, com média de %.2f.\n", aluno.nome, med);
    }

    return 0;
}
// Utilizando a estrutura struct, o código guarda o nome e as notas do aluno, calcula a média e diz se ele foi aprovado ou reprovado. Se a média for 6 ou mais, ele é aprovado, caso contrário é reprovado.