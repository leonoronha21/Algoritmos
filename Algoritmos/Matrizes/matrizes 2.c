#include <stdio.h>
#define linha 5
#define coluna 5
int main (void)
{
	int vetor[linha][coluna],l,c;
	
	for (l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{	
			do{
				printf("Digite o valor da posicao (SOMENTE NUMEROS ENTRE 0 E 50) [%d]*[%d]:", l, c);
				scanf("%d", &vetor[l][c]);
			}
			while ((vetor[l][c]<0) || (vetor[l][c]>50));
			
		}
				
	}
	for (l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			printf(" [%d] ", vetor[l][c]);
		}
		printf("\n");
	}
	system("pause");

}	
