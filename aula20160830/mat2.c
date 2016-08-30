#include <stdio.h>
#include <math.h>

void main()
{
    float lado_a, lado_b, lado_c, angulo, a;
    printf("Digite dois lado do seu triangulo e angulo (radianos), respctivamente, entre os lados para que se ache o terceiro lado:");
    scanf("%f%f%f",&lado_b,&lado_c,&angulo);
    a = sqrt(pow(lado_b, 2) + pow(lado_c, 2) - (2 * lado_b * lado_c) * cos(angulo));
    printf("%f", a);
    return 0;
}
