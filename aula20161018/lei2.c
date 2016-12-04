#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void ler_arq(nome_arq);

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome_arquivo[256];
    printf("\n=============LER INFORMAÇÕES DE UM ARQUIVO============\n");
    printf("Entre com o nome do arquivo e a sua extensão:\n");
    gets(nome_arquivo);
    ler_arq(nome_arquivo);
    return 0;
}

void ler_arq(nome_arq){
    FILE * arquivo;
    int i;
    float f;
    arquivo = fopen(nome_arq, "r");
    if(arquivo){
        fscanf(arquivo, "%d\t%f", &i, &f);
        fclose(arquivo);
        fprintf(stdout, "%d\t%f", i, f);
    }
    else{
        fprintf(stderr, "Arquivo com erro!\n");
    }

}
