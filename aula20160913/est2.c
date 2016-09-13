#include <stdio.h>
#include <math.h>

#define QUANTIDADE_CADASTROS 2

#define CADASTRO(no_me, ida_de, tele_fone)\
    ({ printf("Entre com  o nome da pessoa: %c", no_me); \
       printf("Entre com a idade da pessoa: %d", ida_de); \
       printf("Entre com o telefone da pessoa: %d", tele_fone); \
     })

#define MOSTRE(opcao)\
    ({ printf("(%c, %c)\n", opcao)
     })

struct cadastro {
    char nome[100];
    int idade;
    int telefone;
};

int main(){
    struct A, B, C;
    int resposta;
     for(int i = 0; i < QUANTIDADE_CADASTROS; i++)
    {
        CADASTRO(A, B, C)
    }
    printf("Deseja ver o menu de opcoes? Digite 1 para sim e 2 para nao:")
    scanf("%d", resposta);

    switch(resposta){
    case 1:
        {
            printf("Lista com os nomes:")
            MOSTRE(A)

            break;
        }

    }

    return 0;
}
