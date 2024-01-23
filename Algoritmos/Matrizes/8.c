#include <stdio.h>
#define linha 6
#define coluna 5
int main (void)
{
	int matriz[linha][coluna],l,c;
	int soma0,soma1,soma2,soma3,soma4,soma5,media0,media1,media2,media3,media4,media5;
	
	for (l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{	
				printf("Digite o valor da posicao [%d]x[%d]:", l, c);
				scanf("%d", &matriz[l][c]);
		}
	}
	for (l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			printf (" %d ", matriz[l][c]);
		}
		printf("\n");
	}
	for (l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
		soma0=soma0+matriz[0][c];
		soma1=soma1+matriz[1][c];
		soma2=soma2+matriz[2][c];
		soma3=soma3+matriz[3][c];
		soma4=soma4+matriz[4][c];
		soma5=soma5+matriz[5][c];		
		}
	}
	media0=soma0/coluna;
	media1=soma1/coluna;
	media2=soma2/coluna;
	media3=soma3/coluna;
	media4=soma4/coluna;
	media5=soma5/coluna;
	printf("\nMedia linha 0 = %d", media0);
	printf("\nMedia linha 1 = %d", media1);
	printf("\nMedia linha 2 = %d", media2);
	printf("\nMedia linha 3 = %d", media3);
	printf("\nMedia linha 4 = %d", media4);
	printf("\nMedia linha 5 = %d", media5);
	system("pause");

}	
