#include <stdio.h>
int main (void)
{
	int n1,n2;
	
	printf("Digite o numero 1:");
	scanf("%d",&n1);
	printf("Digite o numero 2:");
	scanf("%d",&n2);
	
	if (n1>n2)
	{
		printf("\n\n%d\n\n",n2);
	}
	if (n1<n2)
	{
		printf("\n\n%d\n\n",n1);
	}	
	if (n1==n2)
	{
		printf ("\n\nNumeros tem valores equivalentes\n\n");
	}
	system("pause");
}
