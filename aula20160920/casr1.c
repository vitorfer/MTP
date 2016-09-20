#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int num;
    printf("Entre com um valor entre 1 e 10: ");
    scanf("%d", &num);
    parabens(num);
    return 0;
}

void parabens(int num)
{
    int x;
    x = (rand()% 10) + 1;
    if( num == x)
    {
        printf("PARABENS!");
    }
    else
    {
        printf("Voce errou!");
    }
}
