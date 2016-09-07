#include <stdio.h>
#include <string.h>

int main()
{
	char frase[256];
	char codigo[256];
	int k = 1, i;
	printf("Entre com uma frase: ");
	fflush(stdin);
	gets(frase);

	for (i = 0; frase[i] != '\0'; i++)
	{
		frase[i] = toupper(frase[i]);
	}
	
	codigo[0] = frase[0];
	
	for (i = 0; frase[i] != '\0'; i++)
	{
		if (frase[i] == ' ') {
			codigo[k] = frase[i + 1];
			k++;
		}
	}

	printf("\nO codigo secreto e: %s", codigo);
	system("pause");
	return 0;
}