#include <stdio.h>
#include <time.h>
#define N 10000
int main(){
    srand(time(0));
    float soma = 0.0f;
    int numero, i;
    int vetor[N];
    printf("Entre com um numero inteiro nao negativo:\n");
    scanf("%d", &numero);
    for(i = 0; i < N; i++) vetor[i] = rand()%numero + 1;
    for(i = 0; i < N; i++) soma = soma + vetor[i];
    printf("A media dos numeros e: %g\n", soma/N);
    return 0;

}
