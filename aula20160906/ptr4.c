#include <stdio.h>

void main(){
    float num_1, num_2, soma;
    printf("Entre com o valor de dois numeros reais:\n");
    scanf("%f%f", &num_1, &num_2);

    soma = num_1 + num_2;

    printf("Endereco de memoria real = 0x: Valor real\n");
    printf("Numero real 1 0x%p : %f\n", &num_1, num_1);
    printf("Numero real 2 0x%p : %f\n", &num_2, num_2);
    printf("Soma dos numeros reais 0x%p : %f\n\n\n", &soma, soma);
}
