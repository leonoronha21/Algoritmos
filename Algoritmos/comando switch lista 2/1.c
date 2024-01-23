#include <stdio.h>
int main (void)
{
	int idade;
		
	printf("Digite a idade do nadador:");
	scanf("%d",&idade);
	
	
	if ((idade>=5)&&(idade<=7))
	{
		printf("\n\nCategoria do nadador:Infantil A.\n\n\n");
	}
	if ((idade>=8)&&(idade<=10))
	{
		printf("\n\nCategoria do nadador:Infantil B.\n\n\n");
	}
	if ((idade>=11)&&(idade<=13))
	{
		printf("\n\nCategoria do nadador:Juvenil A.\n\n\n");
	}
	if ((idade>=14)&&(idade<=17))
	{
		printf("\n\nCategoria do nadador:Juvenil B.\n\n\n");
	}
	if (idade>=18)
	{
		printf("\n\nCategoria do nadador:Senior.\n\n\n");
	}
	system("pause");
}
	
