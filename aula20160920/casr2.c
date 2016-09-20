#include <stdio.h>
#include <stdlib.h>

int recebe_dado(char tipo, void * endereco);

int main()
{
    int i; float f; char c;
    printf("Entre com um inteiro: ");
    recebe_dado('i', &i);
    printf("Entre com um float: ");
    recebe_dado('f', &f);
    printf("Entre com um caractere: ");
    recebe_dado('c', &c);
    printf("Quadrado: %d\n", i*i);
    printf("Raiz: %f\n", sqrt(f));
    printf("Caractere: %c\n", (isupper(c))? tolower(c): toupper(c));
    return 0;
}

int recebe_dado(char tipo, void * endereco)
{
    int c;
    switch(tipo)
    {
        case 'i': scanf("%d", (int *)endereco); break;
        case 'f': scanf("%f", (int *)endereco); break;
        case 'c': scanf("%c", (int *)endereco); break;
    }
    while((c = getchar()) != EOF && c != '\n'); // limpar buffer
    return;
}

void limpa_buffer()
{
    int c;
    while((c = getchar()) != EOF && c != '\n');
}

