#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float * inicializaNum();
float * entrarNum(float * num);

int main(){
    setlocale(LC_ALL, "Portuguese");
    float * num;
    int i;
    float valorMedia;
    num = inicializaNum();
    num = entrarNum(num);
    valorMedia = mediaNum(num);
    for(i = 0; i < 15; i++){
    printf("%f", num[i]);}
    return 0;
}

float * inicializaNum(){
    float * num;
    num = (float*) malloc(sizeof(float));
    return num;
}

float * entrarNum(float * num){
    int quant, i, tamanho = 0;
    printf("Entre com a quantidade de numeros que voce deseja digitar: ");
    scanf("%d", &quant);
    num = (float *) realloc(num, (quant)*sizeof(float));
    for(i = 0; i < quant; i++)
    {
        printf("Entre com o %dº número: ", (i + 1));
        scanf("%f", &num[i]);
    }
    return num;
}

float * mediaNum(float * num){
    int i;

    for(i = 0; i < )

}





