#include <stdio.h>

void pares();

int main()
{
    int resposta;
    do{
            system("cls");
            printf("\n\n                       IMPRIMIR OS PARES OU OS IMPARES                           \n\n\n");
            printf("\n\nDigite o valor da opcao que desejar: \n1-Numeros pares entre 1 e 10. \n2-Numeros impares entre 1 e 10. \n3-Sair. \n ");
            scanf("%d", &resposta);
            switch(resposta)
            {
            case 1:
                {
                    pares();
                    break;
                }
            case 2:
                {
                    impares();
                    break;
                }
            case 3:
                {
                    exit(0);
                    break;
                }
            }
      }while( resposta != "sair");
    return 0;
}

void pares()
{
    system("cls");
    int i;
    for(i = 1; i <= 10; i++)
    {
        if( i % 2 == 0)
        {
            printf(" %d ", i);
        }
    }
    printf("\n\n");
    system("pause");
}

void impares()
{
    system("cls");
    int i;
    for(i = 1; i <= 10; i++)
    {
        if( i % 2 != 0)
        {
            printf(" %d ", i);
        }
    }
    printf("\n\n");
    system("pause");
}
