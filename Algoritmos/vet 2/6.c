/*6. Fazer um programa para preencher um vetor de 15 posições com números entre 0 a 30.
Após, ler números inteiros e procurá-los no vetor até que seja digitado o número 99.
Quando o loop de pesquisa encerrar, então mostrar quantas vezes você acertou os números
do vetor. Lembre-se de que o número pode estar repetido dentro do vetor, considerar
acertos tantas quantas forem as vezes que o número estiver no vetor. Ao final do processo,
exibir o vetor e o número de acertos do jogador.*/
#include <stdio.h>
int main (void)
{
	int vetor[15],i,valor,acerto=0;
	
	for (i=0;i<15;i++)
	{
		printf("Digite o valor de [%d]:", i);
		scanf("%d", &vetor[i]);
		
		if ((vetor[i]<0)||(vetor[i]>30))
		{
			i--;
		}
	}
	
	printf("Tente acertar o valor do vetor ou 99 para encerrar:");
	scanf("%d", &valor);
	
	while (valor!=99)
	{	
		if (valor==vetor[i])
		{
			acerto++;
		}
		printf("Tente acertar o valor do vetor ou 99 para encerrar:");
		scanf("%d", &valor);

	}
			
	for (i=0;i<15;i++)
	{
		printf(" Vetor [%d] = %d\n", i, vetor[i]);
	}
	printf("\n Acertos = %d\n\n", acerto);
	
	system("pause");	
}
