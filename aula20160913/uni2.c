#include <stdio.h>
union Uniao{
    int i;
    float f;
};
int main() {
    union Uniao numero;
    char opcao;
    do {
        printf("Voce quer entrar com (i)nt ou (f)loat? ");
        scanf("%c", &opcao);
        fflush(stdin);
    } while(opcao != 'i' && opcao != 'I' && opcao != 'f' && opcao != 'F');
    if(opcao == 'i' || opcao == 'I'){
        printf("Entre com o int: ");
        scanf("%d", &numero.i);
        printf("Como float: %e\n", numero.f);
    }
    else{
        printf("Entre com o float: ");
        scanf("%f", &numero.f);
        printf("Como int: %d\n", numero.i);
    }
    return 0;
}
