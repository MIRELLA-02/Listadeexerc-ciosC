#include<stdio.h>

int main(){
    int tabuada, i, opcao, res;

    printf("Digite um número:\n");
    scanf("%d",&tabuada);
    
    for (i=0;i<=10;i++){
    printf("%d x %d = %d\n", tabuada,i,res = tabuada * i);
    }
    
     return 0;
}
//O for foi aplicado neste código,a fim de que o sistema irá solicitar um número, que neste caso é 1, e sempre que este número for menor ou igual a 10, ele vai somar, e realizar a operação.
    

    