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
	
	if ((n1>n2)&&(n1>n3))
	{
		printf("\n\no maior valor eh:%d\n\n",n1);
	}
	if((n2>n1)&&(n2>n3))
	{
		printf("\n\nO maior valor eh:%d\n\n",n2);
	}
	if ((n3>n1)&&(n3>n2))
	{
		printf("\n\nO maior valor eh:%d\n\n",n3);
	}
	if ((n1=n2)&&(n3=n1))
	{
		printf("\n\nOs valores sao iguais.\n\n");
	}
	system("pause");
}
