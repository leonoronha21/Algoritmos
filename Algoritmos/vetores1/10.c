/*Faça um programa para ler um vetor de 20 elementos numéricos inteiros. Após, exibir
as posições onde estão guardados os números ‘4’. Se não houver ocorrências deste
número, então exibir mensagem adequada.
*/
#include <stdio.h>
int main(void)
{
	int vet[20],c,sinalizador=0;
	
	for (c=0; c<20; c++)
	{
		printf("Digite o valor da posicao [%d]:", c);
		scanf("%d", &vet[c]);
	}
	printf("----------------------------------------------------------\n");
	for (c=0; c<20; c++)
	{
        if (vet[c]==4)
        {
                      printf(" a posicao do numero 4 = [%d]\n", c);
                      sinalizador++;
        }
    }
    if (sinalizador==0)
    {
       printf("Nao existe 4\n");
    }
    system("pause");
}
