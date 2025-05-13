#include<stdio.h>

int main (){
    int idade; 
    printf("Digite sua idade:\n");
    scanf("%d",&idade); 
    
     if(idade>=18){  
        printf("Voto obrigatório\n");
    }
     else if(idade==17){
         printf("Voto facultativo\n");
     }
     else{
        printf("O usuário não vota\n");
    }
     return 0;
}
//Utilizado o if/else como estrutura de condção, se o usuário for de maior, o código mostrará que o voto é obrigatório, se ele tiver 16/17 anos o voto é facultativo, e se nenhuma dessas for verdadeira, o usuário não vota.
