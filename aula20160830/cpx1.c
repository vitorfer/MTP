#include <stdio.h>
#include <complex.h>

int main()
{
    double complex Z1, Z2, soma;
    double R_Z1, I_Z1, R_Z2, I_Z2;
    printf("real de Z1: "); scanf("%lf", &R_Z1);
    printf("imag de Z1: "); scanf("%lf", &I_Z1);
    printf("real de Z2: "); scanf("%lf", &R_Z2);
    printf("imag de Z2: "); scanf("%lf", &I_Z2);
    Z1 = R_Z1 + I_Z1 * I; Z2 = R_Z2 + I_Z2 * I;
    soma = Z1 + Z2;
    printf("Soma: %lf + %lf*i\n", creal(soma), cimag(soma));
    printf("Soma: %lf /_ %lf\n", cabs(soma), carg(soma));
    return 0;
}
