#include <string.h>
#include <stdio.h>
#define N 256

int main()
{
	char frase[N], contrario[N];
	int k = 1, i;

	printf("Entre com uma frase: ");
	fflush(stdin);
	gets(frase);


	for (i = N - 1; i >= 0; i--)
	{
		contrario[k] = frase[i];
		k++;
	}
	printf("\nO contrario do vetor eh: ");
	for (i = 0; i < N; i++)
	{
		printf("%G\n", contrario[i]);
	}
	return 0;
}