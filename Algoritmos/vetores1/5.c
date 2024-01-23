/*Criar um vetor de 10 elementos inteiros. A seguir criar outro vetor onde todos os
números negativos deverão ser trocados por 0 (zero). Escrever os dois vetores.
*/
#include <stdio.h>
int main (void)
{
	int vetor1[10],vetor2[10],c;
	
	for (c=0; c<10; c++)
	{
		printf("Digite o valor do vetor 1:");
		scanf("%d", &vetor1[c]);
		
		vetor2[c]=vetor1[c];
		
		if(vetor2[c]<0)
		{
			vetor2[c]=0;
		}
	}
	for (c=0; c<10; c++)
	{
		printf("vetor 1 = %d\n", vetor1[c]);
	}
	printf("----------------------------------------------------------------------------------\n");
	for (c=0; c<10; c++)
	{	
		printf("vetor 2 = %d\n", vetor2[c]);
	}	
	system("pause");
}
