#define TAM 5
#include <stdio.h>
int main (void)

/*
6. Fazer um programa para preencher um vetor de 15 posi��es com n�meros entre 0 a 30.
Ap�s, ler n�meros inteiros e procur�-los no vetor at� que seja digitado o n�mero 99.
Quando o loop de pesquisa encerrar, ent�o mostrar quantas vezes voc� acertou os n�meros
do vetor. Lembre-se de que o n�mero pode estar repetido dentro do vetor, considerar
acertos tantas quantas forem as vezes que o n�mero estiver no vetor. Ao final do processo,
exibir o vetor e o n�mero de acertos do jogador.
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
