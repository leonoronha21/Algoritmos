#include <stdio.h>
#define linha 3
#define coluna 3
int main (void)
{
	int matriz[linha][coluna],l,c,maior=0;
	
	for(l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			printf("Digite o valor de [%d]x[%d]:", l, c);
			scanf("%d", &matriz[l][c]);
		}
	}
	for(l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
				if (matriz[l][c]>maior)
				{
					maior=matriz[l][c];
				}
		}
	}
	printf("\n\nO maior numero da matriz = %d\n\n", maior);
	system("pause");
}
	
