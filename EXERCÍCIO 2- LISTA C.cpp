#include<stdio.h>


int main (){
    int n1, n2; 
    printf("Digite o primeiro número:\n");
    scanf("%d",&n1); 
    printf("Digite o segundo número:\n");
    scanf("%d",&n2);
    
     if(n1>n2){  
        printf("n1 é maior que n2\n");
    }
     else{
        printf("n2 é maior que n1\n");
    }
     return 0;
}
//Utilizei novamente if/else como estrutura de condição, o if seria a primeira condição - n1>n2(resposta verdadeira), o else n2>n1 (resposta falsa).
