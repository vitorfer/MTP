#include <stdio.h>

void main(){
    int contagem = 0;
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int tam = sizeof(vetor) / sizeof(int);
    unsigned char * ponteiro = NULL;
    ponteiro = (unsigned char *) vetor;
    for(; ponteiro < (unsigned char *) (vetor + tam); ponteiro++){
        printf("%p : %X\n", ponteiro, *ponteiro);
        if(*ponteiro == 0xFF) contagem++;
    }
    printf("São %d os bytes de memoria com apenas 0's.\n", contagem);
    return 0;
}
