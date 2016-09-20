#include <stdio.h>
#include <math.h>
#include <complex.h>
double delta( double a,  double b,  double c);
complex double raiz( double a,  double b, double valor_delta);
complex double raiz_2( double a,  double b, double valor_delta);

int main()
{
     double a, b, c;
    double valor_delta;
    printf("\n                             FUNCAO QUADRATICA                                 \n\n\n");
    printf("Entre com os valores dos seus coeficientes da equacao: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("\ny = %f X^2 + %f X + %f\n", a, b , c);
    valor_delta = delta(a, b, c);
    printf("\nOs valores das raizes sao: x'= %f  e x'' = %f", creal(raiz(a, b, valor_delta)),
           creal(raiz_2(a , b, valor_delta)));
    printf("\nOs valores das  raizes imag sao: x'= %f  e x'' = %f", cimag(raiz(a, b, valor_delta)),
           cimag(raiz_2(a , b, valor_delta)));
    return 0;
}

double delta( double a,  double b,  double c)
{
    double delta1;
    delta1 = ((pow(b, 2)) - (4 * a * c));
    return delta1;
}

complex double raiz( double a,  double b, double valor_delta)
{
    complex double raiz1;
    if (valor_delta > 0)
    {
        raiz1 = (-b + sqrt(valor_delta))/(2*a);
    }
    else if (valor_delta == 0)
    {
        raiz1 = -b/(2*a);
    }
    else
    {
        raiz1 = -b/(2*a) + I* sqrt(-valor_delta)/(2*a);
    }
    return raiz1;
}

complex double raiz_2( double a,  double b,  double valor_delta)
{
    complex double raiz2;
    if (valor_delta > 0)
    {
        raiz2 = (-b - sqrt(valor_delta))/(2*a);
    }
    else if (valor_delta == 0)
    {
        raiz2 = raiz2 = -b/(2*a);
    }
    else
    {
        raiz2 = -b/(2*a) - I* sqrt(-valor_delta)/(2*a);
    }
    return raiz2;
}
