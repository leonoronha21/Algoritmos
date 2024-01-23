#include <stdio.h>
int main (void)
{
	int numero;
	
	printf("Digite o numero:");
	scanf("%d",&numero);
	
	if (numero>0)
	{
		printf("\n\n\nNumero positivo\n\n\n"); 
	}
	if (numero<0)
	{
		printf("\n\n\nNumero negativo\n\n\n");
	}
	if (numero==0)
	{
		printf("\n\n\nZERO!\n\n\n\n");
	}
	system("pause");
}
