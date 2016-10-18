#include <stdio.h>
#define NCHAR 256

int main(){
    FILE * aquivo;
    char nome[256];
    int idade;
    float altura_m;
    int opcao;
    do{
        printf("1 - Receber dados\n");
        printf("2 - Receber dados\n");
        printf("0 - Sair\n");
        printf("Entre com a opcao: ");
        fscanf(stdin, "%d", &opcao);
        getchar();
        if(opcao == 1) recerberDados();
        if(opcao == 2) recuperarDados();
    } while(opcao);
    return 0;
}

void recerberDados(){
    FILE * arquivo;
    char nome[256];
    int idade;
    float altura_m;
    printf("Entre com seu nome: ");
    fgets(nome, NCHAR, stdin);
    printf("Entre com sua idade: ");
    fscanf(stdin, "%d", &idade);
    printf("Entre com sua altura: ");
    fscanf(stdin, "%f", &altura_m);
    arquivo = fopen("info.txt", "w");
    fprintf(arquivo, "%s\n%d\n%f\n", nome, idade, altura_m);
    fclose(arquivo);
}

void recuperarDados(){
    FILE * arquivo;
    char nome[256];
    int idade;
    float altura_m;
    arquivo = fopen("info.txt", "r");
    if(arquivo == NULL){
        fprintf(stderr, "Arquivo nao existente!\n");
    }
    else{
    fgets(nome, NCHAR, arquivo);
    fscanf(arquivo, "%d\n%f\n", &idade, &altura_m);
    fclose(arquivo);
    fprintf(stdout, "Nome: %s\n", nome);
    fprintf(stdout, "Idade: %d\n", idade);
    fprintf(stdout, "Altura: %f\n", altura_m);
    }
}
