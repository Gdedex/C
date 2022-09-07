#include <stdio.h>
#include <stdlib.h>

int main()
{
    float totalsl, desconto, salario;
    printf("**************************************\n");
    printf("          CALCULADORA DE INSS         \n");
    printf("**************************************\n");

    printf("digite o salario do funcionario:");
    scanf("%f", &salario);

    if (salario <= 600)
    {
        printf("não sera descontado INSS\n");
        printf("sendo assim o salario sera: %.2f", salario);
    }
    else
        if (salario>600 && salario<1200)
        {
            desconto= salario*0.20;
            totalsl= salario-desconto;

            printf("Sera descontado 20 porcento de INSS\n");
            printf("O deconto sera de: %.2f\n", desconto);
            printf("O salario liquido sera:%.2f",totalsl);
        }
        else
            if (salario>=1200 && salario<=2000)
            {
                desconto= salario*0.25;
                totalsl= salario-desconto;

                printf("Sera descontado 25 porcento de INSS\n");
                printf("O desconto sera de: %.2f\n", desconto);
                printf("O salario liquido sera:%.2f",totalsl);
            }
            else
                if(salario>2000)
                {
                    desconto= salario*0.30;
                    totalsl= salario-desconto;

                    printf("Sera descontado 30 porcento de INSS\n");
                    printf("O desconto sera de: %.2f\n", desconto);
                    printf("O salario liquido sera:%.2f",totalsl);
                }
    return 0;
}
