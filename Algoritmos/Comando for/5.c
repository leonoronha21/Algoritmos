#include <stdio.h>
int main (void)
{
	int num,c,result;
	
	printf("Digite o numero desejado:");
	scanf("%d", &num);
	
	for (c=1; c<=10; c++)
	{
		result=c*num;
		printf("%d  X  %d = %d\n", c, num, result);
		
	}
	
	system("pause");
	
}
