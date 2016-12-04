#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void ler_arq(nome_arq);

struct ponto{
    int x;
    int y;
};

void arq(int num, char nome[256]);

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome_arquivo[256];
    int num, i;
    printf("\n==============COORDENADAS============\n");
    printf("Entre com o nome do arquivo e a sua extensão:\n");
    gets(nome_arquivo);
    printf("Entre com a quantidade de pontos:\n");
    scanf("%d", &num);
    struct ponto * p = (struct ponto *) malloc(sizeof(struct ponto) * num);
    arq(num, nome_arquivo);
    free(p);
    return 0;
}

void arq(int num, char nome[256]){
    FILE * arquivo;
    int i, x, y;
    float f;
    for(i = 0; i < num; i++){
                arquivo = fopen(nome, "a");
                if(arquivo){
                printf("Entre com o %d º valor de x e y, respectivamente:\n ", i+1);
                scanf("%d%d", &x, &y);
                fprintf(arquivo," %d,%d ", x, y);
                }
                else{
                    fprintf(stderr, "Arquivo com erro!\n");
                }
                fclose(arquivo);
    }

}
