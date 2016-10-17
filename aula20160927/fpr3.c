#include <stdio.h>
#include <locale.h>

void comuns(int * pA, int * pB, int * quantA, int * quantB);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int quantA, quantB, i;
    int A[50];
    int B[50];
    int * pA;
    int * pB;
    printf("Entre com a quantidade de elementos do seu vetor A: ");
    scanf("%d", &quantA);
    for(i = 0; i < quantA; i++){
        printf("Entre com o %dº número: ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("Entre com a quantidade de elementos do seu vetor B: ");
    scanf("%d", &quantB);
    for(i = 0; i < quantB; i++){
        printf("Entre com o %dº número: ", i + 1);
        scanf("%d", &B[i]);
    }
    pA = A;
    pB = B;
    comuns(pA, pB, &quantA, &quantB);
    return 0;
}

void comuns(int * pA, int * pB, int * quantA, int * quantB)
{
    int j, k;
    printf("A resposta é:\n");
    if(*quantA >= *quantB){
        for(j = 0; j < *quantB; j++)
        {
            for(k = 0; k < *quantA; k++){
                if(pB[j] == pA[k]){
                     printf("%d ", pB[j]);
                }
            }
        }
    }
    else{
        for(j = 0; j < *quantA; j++)
        {
            for(k = 0; k < *quantB; k++){
                if(pA[j] == pB[k]){
                    printf("%d ", pA[j]);
                }
            }
        }
    }
}


