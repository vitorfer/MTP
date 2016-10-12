#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float * inicializaNum();
float * entrarNum(float * num, int * pquant);
float mediaNum(float * num, int * pquant);
float maiorNum(float * num, int * pquant);
float menorNum(float * num, int * pquant);
float * entrarnovoNum(float * num, int * pnewquant, int * pquant);

int main(){
    setlocale(LC_ALL, "Portuguese");
    float * num;
    float valorMedia;
    float maior, menor;
    int i, quant;
    int newquant, resposta;

    num = inicializaNum();
    num = entrarNum(num, &quant);

    voltar:

    valorMedia = mediaNum(num, &quant);
    maior = maiorNum(num, &quant);
    menor = menorNum(num, &quant);
    printf("\nA MÉDIA É: %f\nO MAIOR VALOR É: %f\nO MENOR VALOR É: %f", valorMedia, maior, menor);
    printf("\n\nDeseja digitar mais algum valor? (0 - Não e 1 - Sim) ");
    scanf("%d", &resposta);
    if(resposta == 1)
    {
        printf("\n\nDigite a quantidade de novos números: ");
        scanf("%d", &newquant);
        num = entrarnovoNum(num, &newquant, &quant);
        quant = quant + newquant;
        goto voltar;
    }
    free(num);
    return 0;
}

float * inicializaNum(){
    float * num;
    num = (float*) malloc(sizeof(float));
    return num;
}

float * entrarNum(float * num, int * pquant){
    int i, tamanho = 0;
    printf("Entre com a quantidade de numeros que você deseja digitar: ");
    scanf("%d", &*(pquant));
    num = (float *) realloc(num, (*pquant)*sizeof(float));
    for(i = 0; i < *pquant; i++)
    {
        printf("Entre com o %dº número: ", (i + 1));
        scanf("%f", &num[i]);
    }
    return num;
}

float mediaNum(float * num, int * pquant)
{
    int i;
    float media, soma = 0;

    for(i = 0; i < (*pquant); i++)
    {
            soma = soma + num[i];
    }
    media = (soma / (*pquant));
    return media;
}

float maiorNum(float * num, int * pquant){
    int i;
    float maior = num[0];
    for(i = 0; i < (*pquant); i++)
    {
        if(maior <= num[i])
            {
                maior = num[i];
            }
    }
    return maior;
}

float menorNum(float * num, int * pquant){
    int i;
    float menor = num[0];
    for(i = 0; i < (*pquant); i++)
    {
        if(menor >= num[i])
            {
                menor = num[i];
            }
    }
    return menor;
}

float * entrarnovoNum(float * num, int * pnewquant, int * pquant)
{
    int i;
    num = (float *) realloc(num, (*pnewquant + *pquant)*sizeof(float));
    printf("\nDigite, respectivamente, os %d novos termos: ", *pnewquant);
    for(i = *pquant ; i < (*pnewquant + *pquant); i++)
    {
        scanf("%f", &num[i]);
    }
    return num;
}



