#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define conversao(R, G, B) \
		({ float Y, Cb, Cr; \
		Y = 0.299*R + 0.587*G + 0.114*B; \
		Cb = -0.168736*R - 0.331264*G + 0.5*B; \
		Cr = 0.5*R - 0.418688*G - 0.081312*B; \
		Y = round(Y); \
		Cb = round(Cb); \
		Cr = round(Cr); \
		printf("O resultado eh: Y = %d, Cb = %d, Cr = %d .\n\n", (int)Y, (int)Cb, (int)Cr); \
	})

int main()
{
	int R, G, B;

	printf("\n\n                  CONVERSAO RGB PARA YCbCr                                         \n\n");
	printf("Entre com os valores de R, G e B, respectivamente:\n");
	scanf("%d", &R);
	scanf("%d", &G);
	scanf("%d", &B);

	conversao(R, G, B);

    return 0;
}
