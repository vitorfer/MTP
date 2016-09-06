#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 256
int main(){
    int i;
    char frase[N];
    printf("Entre com uma frase: ");
    gets(frase);
    for(i = 0; frase[i] != '\0'; i++){
        frase[i] = toupper(frase[i]);
    }
    printf("tamanho: %u\n", strlen(frase));
    if(strncmp(frase, "BOM DIA", 7) == 0)
        printf("Bom dia para voce tambem!\n");
    else
        printf("Voce quer dizer: %s?\n", frase);
    return 0;
}
