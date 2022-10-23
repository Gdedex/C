#include <stdio.h>
#include <stdlib.h>

int main(){

printf("*****************************************\n");
printf("             TELA DE CADASTRO\n");
printf("*****************************************\n");

char nome[31];
char endereco[61];
char nascimento[11];
char rg[15];
char cpf[21];

    printf("Digite o Nome: ");
    gets(nome);

    printf("Digite sua data de nascimento: ");
    gets(nascimento);

    printf("Digite seu CPF com .: ");
    gets(cpf);

    printf("Digite seu RG com .: ");
    gets(rg);

    printf("Digite seu endereco: ");
    gets(endereco);

    system("cls");

    FILE *dados;
        dados = fopen("cadastros.txt", "a");

            fprintf(dados, "%s\n", nome);
            fprintf(dados, "%s\n", nascimento);
            fprintf(dados, "%s\n", cpf);
            fprintf(dados, "%s\n", rg);
            fprintf(dados, "%s\n", endereco);

        fclose(dados);

    if(dados == EOF){

        printf("CADASTRO NAO REALIZADO");
    }
    else{

        printf("CADASTRO REALIZADO COM SUCESSO");
    }

return 0;
}
