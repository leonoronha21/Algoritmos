/*Fazer um programa que tem dois vetores do mesmo tamanho (6). O usuário fornecerá
os dados do primeiro, e depois deverá ser armazenado e exibido o valor do segundo
vetor que é o valor do primeiro vetor somado a posição do elemento.
*/
#include <stdio.h>
int main(void)
{
	int vetor1[6],vetor2[6],cont;
	
	for (cont=0;cont<6;cont++)
	{
		printf("Digite o valor da posicao [%d] do primeiro vetor:", cont);
		scanf("%d", &vetor1[cont]);
		
		vetor2[cont]=vetor1[cont]+cont;
	}
	for (cont=0;cont<6;cont++)
	{
		printf("Vetor 1 [%d] = %d\n", cont, vetor1[cont]);
	}
	printf("----------------------------------------------------------------------------------\n");
	for (cont=0;cont<6;cont++)
	{
		printf("Vetor 2 [%d] = %d\n", cont, vetor2[cont]);
	}
	system("pause");
}
