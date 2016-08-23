#include <stdio.h>
#include <time.h>

int main () {
    scanf(time(0));
    int numero, numero_user, x =0, cont =0;
    numero = rand() % 100;

    while( x != 1 )
    {

    printf("Entre com um numero entre zero e noventa e nove: ");
    scanf("%d",&numero_user);
    if( numero_user == numero)
    {
        printf("Acertou!");
        x = 1;
    }
    if( numero_user < numero)
    {
        printf("Menor!");
    }
    if( numero_user > numero)
    {
        printf("Maior!");
        x = 1;
    }
    cont++;
    }
    printf("Numero de tentativas:%d", cont);
    return 0;

}

