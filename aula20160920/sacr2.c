#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int dado_1();
int dado_2();
int dado_3();
int dado_4();
int dado_5();

int main()
{
    srand(time(0));
    int result, i;
    printf("\n\n                                    JOGO DE DADOS                             \n\n");
    for(i = 1; i <= 3; i++)
    {
    result = dado_1() + dado_2() + dado_3() + dado_4() + dado_5();
    if (result >= 21)
    {
        printf("                                    VOCE GANHOU!\n\n");
        exit(0);
    }
    if ( i == 3)
    {
        printf("                                     VOCE PERDEU!\n\n");
    }
    }

    return 0;
}

int dado_1()
{
    int dado1;
    dado1 = (rand() % 6) + 1;
    return dado1;
}
int dado_2()
{
    int dado2;
    dado2 = (rand() % 6) + 1;
    return dado2;
}
int dado_3()
{
    int dado3;
    dado3 = (rand() % 6) + 1;
    return dado3;
}
int dado_4()
{
    int dado4;
    dado4 = (rand() % 6) + 1;
    return dado4;
}
int dado_5()
{
    int dado5;
    dado5 = (rand() % 6) + 1;
    return dado5;
}
