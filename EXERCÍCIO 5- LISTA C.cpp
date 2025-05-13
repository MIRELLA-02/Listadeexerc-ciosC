#include<stdio.h>

int main (){
     int n1, n2,calculo;
     char operador;
     
     printf("Digite um operador ( +, - , *, /):\n");
     scanf("%c",&operador);
     printf("Digite o primeiro numero:\n");
     scanf("%d",&n1); 
     printf("Digite o segundo numero:\n");
     scanf("%d",&n2); 
     
    
     if(operador == '+'){  
         calculo = n1 + n2;
        printf("O resultado da soma é: %d\n",calculo);
     }
     else if(operador == '-') {
         calculo = n1 - n2;
         printf("O resultado da subtração é: %d\n",calculo);
     }
     else if(operador == '*'){
         calculo = n1 * n2;
         printf("O resultado da multiplicação é: %d\n",calculo);
     }
     else{
         calculo = n1 / n2;
        printf("O resultado da divisão é: %d\n",calculo);
    }
     return 0;
}
//Utilizado o if/esle como estrutura de condição, para quando o usuário digitar os números, de acordo com cada condição, realizar o cálculo

