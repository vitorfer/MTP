#include <stdio.h>

int main () {
    int numero;
    double inverso_1, soma_1 = 0;
    float inverso, soma = 0, i;
    printf("Entre com o valor de um numero: ");
    scanf("%d",&numero);

    inverso = 1 /(float) numero;
    for(i = 1; i <= 729; i++)
    {
        soma = soma + inverso;
    }

    inverso_1 = 1 /(double) numero;
    for(i = 1; i <= 729; i++)
    {
        soma_1 = soma_1 + inverso_1;
    }
    printf("O resultado e o numero: %.15f", soma);
    printf("\nO resultado e o numero: %.15lf", soma_1);
    return 0;

}
