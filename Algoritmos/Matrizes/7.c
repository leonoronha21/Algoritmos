#include <stdio.h>
#define linha 5
#define coluna 5
int main (void)
{
	int matriz[linha][coluna],vetorpos[linha],vetorneg[coluna];
	int l,c,neg,pos;

	for(l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			printf("Digite o valor de [%d]x[%d]:", l, c);
			scanf("%d", &matriz[l][c]);
		}
	}
	pos=0;
	neg=0;
	for(l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			if (matriz[l][c]>0)
			{	
				vetorpos[l]=matriz[l][c];
				printf("O vetor de numero positivo [%d] = %d\n", pos, vetorpos[l]);
				pos++;
			}
		}
	}
	printf("\n*************************************************************************************\n");
	for(l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
	
			if (matriz[l][c]<0)
			{
				vetorneg[c]=matriz[l][c];
				printf("O vetor de numero negativo [%d] = %d\n\n", neg, vetorneg[c]);
				neg++;
			}
		}
	}
	system("pause");
	
	
}
