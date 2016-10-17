#include <stdio.h>

float calculo(int a, int n);

int main(){
    int a, n;
    float resultado;
    printf("Entre com o valor do a e do b (valores inteiros), respectivamente: ");
    scanf("%d%d", &a, &n);
    resultado = calculo(a, n);
    printf("O resultado é: %f", resultado);
    return 0;
}

float calculo(int a, int n){
    return((a == n || n == 0)? 1 : ((a * calculo(a - 1, n - 1))/ n ));
}
