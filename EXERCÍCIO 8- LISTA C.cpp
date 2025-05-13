#include<stdio.h>

int main(){
    int numeros,i, soma = 0;
    
    for (i= 2; i<=200; i += 2){
    soma = soma + i;
    }
     printf(" A soma de todos os números pares é igual a: %d\n", soma);
     return 0;
}
// No início do código, a foi declarado as variáveis, e igualada 0. Logo após, foi utilizado a estrutura for para que sempre que i for menor ou igual a 200, ele some os números pares.
    

    