#include <stdio.h>
int main (void)
{
	int n1,n2,n3,n4;
	
	printf("Digite o primeiro numero:");
	scanf("%d",&n1);
	printf("Digite o segundo numero:");
	scanf("%d",&n2);
	printf("Digite o terceiro numero:");
	scanf("%d",&n3);
	
	if ((n1>n3)&&(n2>n3))
	{
		n4=n1+n2;
		printf("\n\nA soma dos valores=%d\n\n",n4);
	}
	if ((n2>n1)&&(n3>n1))
	{
		n4=n2+n3;
		printf("\n\nA soma dos valores=%d\n\n",n4);
	}
	if ((n3>n2)&&(n1>n2))
	{
		n4=n3+n1;
		printf("\n\nA soma dos valores=%d\n\n",n4);
	}
	system("pause");
}
