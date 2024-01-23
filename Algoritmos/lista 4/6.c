#include <stdio.h>
int main (void)
{
	float laranja,menosdaduzia,laranjacompradas;
	
	printf("Digite o numero de laranja compradas:");
	scanf("%f",&laranjacompradas);
	
	if (laranjacompradas>=12)
	{
		laranja=laranjacompradas*0.35;
		printf("\n\nO valor da laranja =R$%.2f\n\n",laranja);
	}
	else
	{
		laranja=laranjacompradas*0.50;
		printf("\n\nO valor da laranja =R$%.2f\n\n",laranja);
	}
	system("pause");
}
