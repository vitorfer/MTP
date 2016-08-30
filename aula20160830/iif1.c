#include <stdio.h>
#include <float.h>

int main()
{
    if(1.0 > (1.0f - FLT _EPSILON))
        printf("1 maior que 1-eps");
    else
        printf("1 nao eh maior que 1-eps");
    if(1.0 > (1.0 - DBL_EPSILON*2.0))
        printf("1 maior que 1-eps\n");
    else
        printf("1 nao eh maior que 1-eps\n")
        return 0;
}
