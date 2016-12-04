#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void ler_arq(nome_arq);

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    char nome[256];
    int num;
    printf("\n=============LER INFORMAÇÕES DE UM ARQUIVO============\n");
    printf("Entre com o nome do arquivo e a sua extensão:\n");
    gets(nome);
    printf("Entre com a quantidade de informações do arquivo:\n");
    scanf("%i", &num);
    criar(num, nome);
    return 0;
}

void criar(int num, char nome[256]){
    FILE * arquivo;
    int i;
    int f;
    arquivo = fopen(nome, "w");
    if(arquivo){
        fprintf(arquivo ,"- ");
        for(i = 0; i < num; i++){
        f = rand()%200;
        fprintf(arquivo, "%d - ", f);
        }
        fclose(arquivo);
    }
    else{
        fprintf(stderr, "Arquivo com erro!\n");
    }

}
