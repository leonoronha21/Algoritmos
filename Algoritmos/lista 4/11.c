#include <stdio.h>
int main (void)
{
	float altura,ideal;
	int sexo;	
	
	printf("Digite sua altura:");
	scanf("%f",&altura);
	printf("Digite seu sexo(1 para MASCULINO ou 2 FEMININO):");
	scanf("%d",&sexo);
	
	if (sexo==1)
	{
		ideal=((72.7*altura)-58);
	}
	if (sexo==2)
	{
		ideal=((62.1*altura)-44.7);
	}
	printf("\n\nO peso ideal=%.2f\n\n",ideal);
	system("pause");
}
