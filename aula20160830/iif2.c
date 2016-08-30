#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

int main () {
    int numero, i;
    uint64_t fatorial = 1;
    printf("Entre com o valor de um numero: ");
    scanf("%d",&numero);
    for(i = 2; i <= numero; i++)
    {
        fatorial = fatorial * i;
    }
    printf("O fatorial do numero e: %" PRIu64 "\n", fatorial);
    return 0;

}
