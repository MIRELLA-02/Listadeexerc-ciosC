/#include <stdio.h>

struct Produto {
    char nome[30];
    float preco;
    int quantidade;
    float total;  
};

int main() {
    struct Produto produtos[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Produto %d\n", i + 1);
        
        printf("Nome:\n");
        scanf("%s", produtos[i].nome);

        printf("Preco:\n");
        scanf("%f", &produtos[i].preco);

        printf("Quantidade:\n");
        scanf("%d", &produtos[i].quantidade);

        
        produtos[i].total = produtos[i].preco * produtos[i].quantidade;
    }

    
    printf("Totais dos produtos:\n");
    for(i = 0; i < 5; i++) {
        printf("Produto: %s | Total: R$ %.2f\n", produtos[i].nome, produtos[i].total);
    }

    return 0;
}
//Utilizando o struct, criei uma estrutura para guardar nome, preço, quantidade e total de 5 produtos. No int main, será preenchido os dados solicitados, calculo o total e mostro na tela