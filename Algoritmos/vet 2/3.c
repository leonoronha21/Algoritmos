/*3. Ler um vetor de 10 elementos inteiros. Ap�s isto, imprimir na tela os 10 valores lidos e
o usu�rio poder� escolher um destes valores para ser exclu�do do vetor. Ler o valor
escolhido elimin�-lo do vetor. No momento da exclus�o todos os valores posteriores ao
valor escolhido dever�o ser reorganizados (movidos uma posi��o para a esquerda) a fim de
que o vetor resultante n�o fique com espa�o em branco. A �ltima posi��o dever� aparecer
com o valor zero e n�o com o �ltimo valor duplicado. Imprimir o novo vetor.
*/
#define tam 10
#include <stdio.h>
int main (void)
{
	int vetor[tam],i,excluir;
	
	//ENTRADA DE DADOS
	for (i=0; i<tam; i++)
	{
		printf("Digite o valor de %d :", i);
		scanf("%d", &vetor[i]);
	}
	for (i=0; i<tam; i++)
	{
		printf("[%d] = %d \n", i, vetor[i]);
	}
	//PROCESSAMENTO
	printf("digite o valor que deseja retirar:");
	scanf("%d", &excluir);
	
	for (i=0; i<tam; i++)
	{	
		if (excluir==vetor[i])
		{
			vetor[i]=0;
		}
		if (vetor[i]==0)
		{
			vetor[0]=vetor[1];
			vetor[1]=vetor[2];
			vetor[2]=vetor[3];
			vetor[3]=vetor[4];
			vetor[4]=vetor[5];
			vetor[5]=vetor[6];
			vetor[6]=vetor[7];
			vetor[7]=vetor[8];
			vetor[8]=vetor[9];
			vetor[9]=0;
		}
		printf(" [%d] = %d\n", i, vetor[i]);	
	}
	system("pause");
}
