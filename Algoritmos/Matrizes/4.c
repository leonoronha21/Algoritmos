#include <stdio.h>
#define linha 3
#define coluna 3
int main (void)
{
	int matriz[linha][coluna],vetorlinha[linha],vetorcoluna[coluna],l,c,sinalizador;
	
	for(l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			printf("Digite o valor da matriz [%d]x[%d]:", l, c);
			scanf("%d", &matriz[l][c]);
		}
		
	}
	sinalizador=0;
	for(l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			switch (matriz[l][c])
			{
				case 20:
					sinalizador++;
					vetorlinha[l]=l;
					vetorcoluna[c]=c;
					printf("20 esta na [%d] [%d]\n", vetorlinha[l],vetorcoluna[c]);
					break;				
			}
		}
	}
	if (sinalizador==0)
	{
		printf("\nNao ha ocorrencia de numero 20!\n\n");
	}
	system("pause");
	
}
