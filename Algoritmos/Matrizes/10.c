/*	0 1 2 3 4 5
0	0 0 0 0 0 0				diagonal principal = 00 11 22 33 44 55
1	0 0 0 0 0 0
2	0 0 0 0 0 0
3	0 0 0 0 0 0
4	0 0 0 0 0 0
5	0 0 0 0 0 0
*/
#include <stdio.h>
#define linha 6
#define coluna 6
int main (void)
{
	int l ,c;
	char matriz[linha][coluna];
	
	for (l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			if (l<c)
			{
				matriz[l][c]='*';
			}
			if (l>c)
			{
				matriz[l][c]='@';
			}
			if (l==c)
			{
				matriz[l][c]='P';
			}
		}
	}
	for (l=0;l<linha;l++)
	{
		for (c=0;c<coluna;c++)
		{
			printf(" %c ", matriz[l][c]);
		}
		printf("\n");
	}
	system("pause");
}

