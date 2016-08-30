#include <stdio.h>
#include <math.h>

void main()
{
    float b, n, a;
    printf("Digite os valores da base e do numero: ");
    scanf("%f%f",&n,&b);
    a = log10(n) / log10(b);
    printf("%f A resposta eh:", a);
    return 0;
}

