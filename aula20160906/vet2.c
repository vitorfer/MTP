#include <stdio.h>

int main(){
    int i, j, k = 9;
    float vet[10], vet1[10],aux = 0;
    printf("Entre com 10 numeros:");
    for(i = 0; i < 10; i++){
        printf("Entre com o numero %d\n ", i+1);
        scanf("%f", &vet[i]);
    }
    for(i=0 ; i < 10 ; i++)
            printf("Numero %d = %f\n", i+1, vet[i]);

    for(j = 0; j < 10; j++){
            vet1[j] = vet[k];
            k--;
    }
    for(i = 0; i < 10; i++){
        printf("%f", vet1[i]);
    }
}
