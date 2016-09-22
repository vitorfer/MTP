#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define N 255

struct aluno{
        char nome[30];
        int idade;
        char telefone[200];
    };


int main()
{
    struct aluno alunos[5];
    int i=0, j, resposta;

    for(i=0; i<N; i++)
    {
        printf("\n                                  CADASTRO DE ALUNOS                                           \n\n");
        printf("Entre com o nome do aluno: ");
        fflush(stdin);
        gets(alunos[i].nome);
        printf("Idade= ");
        scanf("%d", &alunos[i].idade);
        printf("Telefone com DDD= ");
        fflush(stdin);
        gets(alunos[i].telefone);
        if(alunos[i].idade<0)
            break;
    }



    do
    {
        system("cls");
        printf("\n                                  CADASTRO DE ALUNOS                                           \n\n");
        printf("Digite o numero da opcap que voce desejar:(para parar coloque um idade negativa) ");
        printf("\n1-Listar nomes \n2-Listar idades \n3-Listar telefones\n4-Sair \n");
        scanf("%d", &resposta);

        switch(resposta)
        {
            case 1:
                for(j=0; j<i; j++)
                {
                    printf("O nome do aluno eh: %s \n", alunos[j].nome);
                }
                system("pause");
            break;

            case 2:
                for(j=0; j<i; j++)
                {
                    printf("A idade do aluno %d eh %d \n", j+1, alunos[j].idade);
                }
                system("pause");
            break;
            case 3:
                for(j=0; j<i; j++)
                {
                    printf("O telefone do aluno %d \n %s \n", j+1, alunos[j].telefone);
                }
                system("pause");
                break;
        }
    } while (resposta!=4);



    return 0;
}
