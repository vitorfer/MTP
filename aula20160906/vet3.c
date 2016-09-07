#include <stdio.h>

int main() {
	int i, j, k;
	float vet[10], soma = 0, produto = 1;
	printf("Entre com 10 valores:");
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &vet[i]);
	}
	for (j = 0; j < 10; j++)
	{
		soma = soma + vet[j];
	}
	for (k = 0; k < 10; k++)
	{

		produto = produto * vet[k];
	}
	printf("\nO valor da soma e: %f\n", soma);
	printf("\nO valor do produto e: %f\n\n", produto);
	system("pause");
	return 0;
}
