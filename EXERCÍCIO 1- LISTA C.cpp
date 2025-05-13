#include<stdio.h>


int main (){
    int num; 
    printf("Digite um número:\n"); //Pedindo ao usuário o número
    scanf("%d",&num); 
    
     if(num % 2 == 0){  
        printf("O número digitado é par\n");
    }
     else{
        printf("O número digitado é ímpar\n");
    }
     return 0;
}

// Utilizei if/else como estrutura de condição, no if é se o número for verdadeiro, e no else, se ele for falso. 