#include <stdio.h>

int funcao(int num, int den, int num1, int den1);

int main()
{
    int num, den, num1, den1, resposta, resposta1;
    printf("Entre com numerador da primeira funcao: ");
    scanf("%d",&num);
    printf("Entre com o denominador da primeira funcao: ");
    scanf("%d", &den);
    printf("Entre com numerador da segunda funcao: ");
    scanf("%d",&num1);
    printf("Entre com o denominador da segunda funcao: ");
    scanf("%d", &den1);
    resposta = funcao(num, den, num1, den1);
    resposta1 = funcao1(den, den1);
    printf("A resposta da soma entre os numeros racionais eh: %d / %d", resposta, resposta1);
    return 0;
}

int funcao(int num, int den, int num1, int den1){
    int solucao, numerador, numerador1, denominador, numerador_final;
    numerador = num * den1;
    numerador1 = num1 * den;
    denominador = den1 * den;
    numerador_final = numerador1 + numerador;
    return numerador_final;
}

int funcao1(int den, int den1){
    int denominador_final;
    denominador_final = den1 * den;
    return denominador_final;
}


