#include <stdio.h>
#define linha 3
#define coluna 3
int main (void)
{
	int matriz[linha][coluna],l ,c;
	
	for (l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			matriz[l][0]=0;
			matriz[l][1]=1;
			matriz[l][2]=2;
		}
	}
	printf("\n\n\n");
	for (l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			printf (" %d ", matriz[l][c]);
		}
		printf("\n");
	}
	system("pause");
	
}
