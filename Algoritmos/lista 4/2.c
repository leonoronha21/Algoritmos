#include <stdio.h>
int main (void)
{
	int numero,resto;
	
	printf("Digite o numero:");
	scanf("%d",&numero);
	
	resto=numero%2;
	
	if (resto=0)
	{
		printf("NUMERO PAR");
	}
	if (resto>=1) 
	{
		printf("NUMERO IMPAR");
	}
	system("pause");
}
