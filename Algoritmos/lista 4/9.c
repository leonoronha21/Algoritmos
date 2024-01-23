#include <stdio.h>
int main (void)
{
	int n1,n2,n3;
	
	printf("Digite o primeiro numero:");
	scanf("%d",&n1);
	printf("Digite o segundo numero:");
	scanf("%d",&n2);
	printf("Digite o terceiro numero:");
	scanf("%d",&n3);
	
	if (n1>n2>n3)
	{
		printf("\n\n Ordem crescente %d,%d,%d\n\n" ,n3 , n2, n1);
	}
	if (n2>n1>n3)
	{
		printf("\n\n Ordem crescente %d,%d,%d\n\n",n3,n1,n2);
	}
	if (n3>n2>n1)
	{
		printf("\n\n Ordem crescente %d,%d,%d\n\n",n1,n2,n3);
	}
	if (n3>n1>n2)
	{
		printf("\n\n Ordem crescente %d,%d,%d\n\n",n2,n1,n3);
	}
	system("pause");
}
