#include <stdio.h>
int main (void)
{
	int num1,num2,resto1,resto2;
	
	printf("Digite um numero:");
	scanf("%d",&num1);
	printf("Digite o outro numero:");
	scanf("%d",&num2);
	
	resto1=num1%2;
	resto2=num2%2;

	if (resto1==0 && resto2>=1)
	{
		printf("\n\n\nO primeiro eh Par.\n\n");
		printf("\n\nO segundo eh impar.\n\n");
	}
	if (resto1>=1 && resto2==0)
	{
		printf("\n\nO primeiro eh impar.\n\n");
		printf("\n\nO segundo eh par.\n\n");
	}
	if (resto1==0 && resto2==0)
	{
		printf("\n\nOs dois sao pares.\n\n");
	}
	if (resto1>=1 && resto2>=1)
	{
		printf("Os dois sao impares.\n\n");
	}
	system("pause");
}
