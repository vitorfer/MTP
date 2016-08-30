#include <stdio.h>
#include <ctype.h>

int main() {
    int indice = 0;
    char frase[256];
    printf("Escreva uma frase: ");
    gets(frase);
    while(frase[indice]){
        frase[indice] = toupper(frase[indice]);
        indice++;
    }
    printf("%s\n", frase);

    return 0;
}

