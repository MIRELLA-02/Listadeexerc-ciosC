#include<stdio.h>


int main (){
    int nota1, nota2, med; 
    printf("Digite a primeira nota:\n");
    scanf("%d",&nota1); 
    printf("Digite a segunda nota:\n");
    scanf("%d",&nota2);
      med= (nota1 + nota2) / 2;
      
     if(med>=7){  
        printf("O estudante está aprovado!\n");
    }
     else{
        printf(" O estudante está reprovado\n");
    }
     return 0;
}
//Utilizei if/else para condição, se a média do aluno for maior ou igual a 7( resposta verdadeira), ele está aprovado, se não, ele está reprovado
