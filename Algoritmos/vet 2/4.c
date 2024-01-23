#define est 5
#define cust 5
#include <stdio.h>
int main (void)
{
	int i,c;
	float estoque[est],custo[cust],totalarm,soma,soma2;
	
	//ENTRADA DE DADOS
	for (i=0;i<est;i++)
	{
		printf("Digite a quantidade de produtos no estoque [%d]:", i);
		scanf("%f", &estoque[i]);
		
		soma2=soma+estoque[i];		
	}
	for (i=0;i<est;i++)	
	{	
		printf("Digite o custo de cada produto [%d]:", i);
		scanf("%f", &custo[i]);
		soma=soma+custo[i];
	}
	totalarm=soma/soma2;
	
	//SAIDA
	printf("\nA soma total de produtos da distribuidora = %.3f\n\n", soma);
	printf("O custo total por produto armazenado = %.3f\n\n", totalarm);
	system("pause");	
}
