/*
8) Ler dois vetores: R de 5 elementos e S de 10 elementos. Gerar um vetor X de 15
elementos cujas 5 primeiras posições contenham os elementos de R e as 10 últimas
posições, os elementos de S. Escrever o vetor X.
*/
#include <stdio.h>
int main (void)
{
	int cont, vetorR[5], vetorS[10], vetorX[15], cont2;
	for (cont=0; cont<5; cont++)
	{
        printf ("informe os valores de R:");
		scanf ("%d", &vetorR[cont]);
	}
	for (cont=0; cont<10; cont++)
	{
        printf ("informe os valores de S:");
		scanf ("%d", &vetorS[cont]);
    }
	for (cont=0; cont<5; cont++)
	{
        vetorX[cont]=vetorR[cont];
    }
    cont2=5;
    for (cont=0; cont<10; cont++)
    {
        vetorX[cont2]=vetorS[cont];
        cont2++;
    }
    	for (cont=0; cont<15; cont++)
	{
		printf ("vetorX:%d\n", vetorX[cont]);
	}
	system ("pause");
}
