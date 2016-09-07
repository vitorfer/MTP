#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(0));
	int valor, i, j;
	float vet[999], maior, menor;
	printf("Entre com um valor inteiro nao negativo entre 1 e 1000:");
	scanf("%d", &valor);

	for (i = 0; i <= valor; i++) {
		vet[i] = rand() % 10;
	}

	maior = vet[0];
	menor = vet[0];

	for (i = 0; i < valor; i++) {
		if (vet[i] > maior)
		{
			maior = vet[i];
		}
		if (vet[i] < menor)
		{
			menor = vet[i];
		}
	}
	for (i = 0; i < valor; i++) {
		printf("%f ", vet[i]);
	}
	printf("\nO maior e: %f", maior);
	printf("\nO menor e: %f", menor);
	system("pause");
	return 0;
}