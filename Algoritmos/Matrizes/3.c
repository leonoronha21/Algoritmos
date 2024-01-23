/*3. Fazer um programa que leia números inteiros para preencher uma matriz 4 X 4 e os
exiba em formato de matriz omitindo os valores da diagonal principal.*/
#define linha 4
#define coluna 4
#include <stdio.h>
int main (void)
{
	int matriz[linha][coluna], l, c;
	
	for (l=0; l<linha; l++)
	{
		for (c=0; c<coluna; c++)
		{
			printf("Defina o valor [%d][%d]:", l, c);
			scanf("%d", &matriz[l][c]);
		}
	}
	printf("\n");
	for (l=0; l<linha; l++)
	{
			
		for (c=0; c<coluna; c++)
		{
			if (l==c)
			{
				matriz[l][c]=0;
			}			
			printf(" [%d] ", matriz[l][c]);
		}
		printf("\n");
		
	}
	system("pause");
}

// matriz[0][0] [1][1] [2][2] [3][3]
