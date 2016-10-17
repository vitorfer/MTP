#include <stdio.h>
#include <locale.h>
#define N 50

int calcular(int vet[N], int quant);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int soma = 0;
    int vet[N];
    int quant, i;
    printf("Entre com a quantidade de elementos do seu vetor: ");
    scanf("%d", &quant);
    for(i = 0; i < quant; i++){
        printf("Entre com o %dº valor do seu vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }
    quant = quant - 1;
    soma = calcular(vet, quant);
    printf("A soma dos elementos desse vetor de tamanho %d é: %d\n\n\n", quant + 1,soma);
    return 0;
}

int calcular(int vet[N], int quant){
    return ((quant == 0)? vet[0] : vet[quant] + calcular(vet, quant - 1));
}
