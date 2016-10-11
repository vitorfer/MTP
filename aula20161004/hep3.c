#include <stdio.h>
char * inicializaTexto();
char * recebeTexto(char * texto);
int main(){
    char * texto;
    texto = inicializaTexto();
    printf("::::::::::::::: Entre com seu texto (entre com '#' +ENTER para sair) ::::::::::::::::\n");
    texto = recebeTexto(texto);
    printf("%s\n", texto);
    return 0;
}

char * inicializaTexto(){
    char * texto;
    texto = (char *) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}

char * recebeTexto(char * texto){
    int c, tamanho = 0;
    do{
        c = getchar();
        if(c != '3'){
            tamanho++;
            texto = (char *) realloc(texto, (tamanho+1)*sizeof(char));
            texto[tamanho] = '\0';
            texto[tamanho-1] = c;
        }
    }while(c != '#');
    return texto;
}
