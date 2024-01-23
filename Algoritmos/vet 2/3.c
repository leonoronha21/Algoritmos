/*3. Ler um vetor de 10 elementos inteiros. Após isto, imprimir na tela os 10 valores lidos e
o usuário poderá escolher um destes valores para ser excluído do vetor. Ler o valor
escolhido eliminá-lo do vetor. No momento da exclusão todos os valores posteriores ao
valor escolhido deverão ser reorganizados (movidos uma posição para a esquerda) a fim de
que o vetor resultante não fique com espaço em branco. A última posição deverá aparecer
com o valor zero e não com o último valor duplicado. Imprimir o novo vetor.
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
