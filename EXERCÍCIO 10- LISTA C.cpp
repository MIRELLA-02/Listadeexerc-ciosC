#include <stdio.h>

int main (){
    int num, i, res = 1;
    
    printf("Digite um número:\n");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        res = res * i;
}
      printf("O fatorial deste número é: %d\n", res);
      
      return 0;
}
// O usuário digitará um número, o qual o sistema irá ler. Depois disso, usufruindo a estrutura for, o código calculará o fatorial deste número.
