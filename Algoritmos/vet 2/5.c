/*5. Fa�a um programa para ler 10 n�meros inteiros, colocando-os em um vetor. Crie dois
outros vetores: um para armazenar apenas os n�meros positivos (maior ou iguais a zero) e
outro para armazenar apenas os n�meros negativos. Coloque os n�meros positivos no vetor
de positivos e os n�meros negativos no vetor de negativos. Mostre na tela os tr�s vetores.
Obs.: Os vetores de positivos e negativos n�o dever�o conter espa�os em branco entre os
valores armazenados.
*/
#include <stdio.h>
#define tam 10
int main (void)
{
	int vetor[tam],neg[tam],pos[tam];
	int i,qttn,qttp;
	
	//ENTRADA DE DADOS
	for (i=0;i<tam;i++)
	{
		printf ("digite os dados do primeiro vetor [%d]:", i);
		scanf("%d", &vetor[i]);		
	}
	for (i=0; i<tam;i++)
	{
		printf("O vetor 1 [%d] = %d\n", i, vetor[i]);
	}
	qttp=0;
	printf("\n\n\n");
	for (i=0;i<tam;i++)
	{
		if (vetor[i]>=0)
		{
			pos[i]=vetor[i];
			printf("Vetor de numeros positivos [%d] = %d\n", qttp, pos[i]);
			qttp++;
		}
	}
	printf("\n\n\n");
	qttn=0;
	for (i=0;i<tam;i++)
	{
		if(vetor[i]<0)
		{
			neg[i]=vetor[i];
			printf("Vetor de numeros negativos [%d]= %d\n", qttn, neg[i]);
			qttn++;
		}
	}
	printf("\n\n\n");
	system("pause");	
}
