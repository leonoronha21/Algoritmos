#define TAM 5
#include <stdio.h>
int main (void)

/*
6. Fazer um programa para preencher um vetor de 15 posições com números entre 0 a 30.
Após, ler números inteiros e procurá-los no vetor até que seja digitado o número 99.
Quando o loop de pesquisa encerrar, então mostrar quantas vezes você acertou os números
do vetor. Lembre-se de que o número pode estar repetido dentro do vetor, considerar
acertos tantas quantas forem as vezes que o número estiver no vetor. Ao final do processo,
exibir o vetor e o número de acertos do jogador.
*/

{
	int vet[TAM], flag, acertos=0, i, flagErro=0;
	
	for (i=0; i<TAM; i++)
	{
		printf (" Informe o valor do vetor na posicao %d entre 0 e 30: ", i); scanf ("%d", &vet[i]);
	}
	
	printf (" Agora informe um inteiro entre 0 e 30 e confira se acertou,\nou digite 99 para encerrar: "); scanf ("%d", &flag);
	
	while (flag != 99)
	{
		for (i=0; i<TAM; i++)
		{
			if (vet[i] == flag)
			{
				printf ("\n Voce acertou, esta na posicao %d", i);
				acertos++;
				flagErro=1;
			}
		}
		if (flagErro == 0)
			printf ("\n Voce errou.");
			
		flagErro = 0;
		printf ("\n Informe o proximo numero ou digite 99 para encerrar: "); scanf ("%d", &flag);
	}
	printf (" Voce teve um total de %d acertos.", acertos);
}
