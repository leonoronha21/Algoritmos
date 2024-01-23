/*6. Fazer um programa para preencher um vetor de 15 posi��es com n�meros entre 0 a 30.
Ap�s, ler n�meros inteiros e procur�-los no vetor at� que seja digitado o n�mero 99.
Quando o loop de pesquisa encerrar, ent�o mostrar quantas vezes voc� acertou os n�meros
do vetor. Lembre-se de que o n�mero pode estar repetido dentro do vetor, considerar
acertos tantas quantas forem as vezes que o n�mero estiver no vetor. Ao final do processo,
exibir o vetor e o n�mero de acertos do jogador.*/
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
