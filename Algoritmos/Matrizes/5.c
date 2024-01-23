#include <stdio.h>
#define linha 6
#define coluna 5
int main (void)
{
	int matriz[linha][coluna],l,c,sinalizador;
	
	for (l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			printf("Digite o valor da matriz [%d]x[%d]:", l, c);
			scanf("%d", &matriz[l][c]);
		}
	}
	sinalizador=0;
	for (l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			if (matriz[l][c]==0)
			{
				sinalizador++;
			}
		}
	}
	printf("\nA quantidade de 0 = %d\n", sinalizador);
	system("pause");
	
}
