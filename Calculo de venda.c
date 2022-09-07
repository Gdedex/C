#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("**************************************\n");
    printf("          CALCULADOR DE VENDAS        \n");
    printf("**************************************\n");
    float custo, venda;

    printf("Custo do Produto\n");
    scanf("%f", &custo);

    if (custo < 20)
    {
        venda = custo + (custo * 0.45);
        printf("O valor de venda será %.2f", venda);
    }

    if (custo > 30)
    {
        venda = custo + (custo * 0.30);
        printf("O valor de venda será %.2f", venda);
    }


    return 0;
}
