#include <stdio.h>

int main()
{
    int mes;
    printf("Entre como o numero do mes em que voce nasceu: \n");
    scanf("%d", &mes);
    switch(mes)
    {
    case 1:
        {
            printf("Voce nasceu em Janeiro.\n\n");
            system("pause");
            break;
        }
    case 2:
        {
            printf("Voce nasceu em Fevereiro.\n\n");
            system("pause");
            break;
        }
    case 3:
        {
            printf("Voce nasceu em Marco.\n\n");
            system("pause");
            break;
        }
    case 4:
        {
            printf("Voce nasceu em Abril.\n\n");
            system("pause");
            break;
        }
    case 5:
        {
            printf("Voce nasceu em Maio.\n\n");
            system("pause");
            break;
        }
    case 6:
        {
            printf("Voce nasceu em Junho.\n\n");
            break;
        }
    case 7:
        {
            printf("Voce nasceu em Julho.\n\n");
            system("pause");
            break;
        }
    case 8:
        {
            printf("Voce nasceu em Agosto.\n\n");
            system("pause");
            break;
        }
    case 9:
        {
            printf("Voce nasceu em Setembro.\n\n");
            system("pause");
            break;
        }
    case 10:
        {
            printf("Voce nasceu em Outubro.\n\n");
            system("pause");
            break;
        }
    case 11:
        {
            printf("Voce nasceu em Novembro.\n\n");
            system("pause");
            break;
        }
    case 12:
        {
            printf("Voce nasceu em Dezembro.\n\n");
            system("pause");
            break;
        }
    default:
        {
            printf("OPCAO INVALIDA!!!!!\n\n");
            system("pause");
            break;
        }
    }
    return 0;
}
