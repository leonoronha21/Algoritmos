#include <stdio.h>
int main (void)
{
	float salario,salariofinal,aumento,diferenca;
	int codigo;
	
	printf("Digite o codigo:");
	scanf("%d",&codigo);	
	printf("Digite o salario:");
	scanf("%f",&salario);
	
	switch (codigo)
	{
		case 91 :
			aumento=salario*0.10;
			salariofinal=salario+aumento;
			printf("\n\nNovo salario=R$%.3f",salariofinal);
			break;
		case 92 :
			aumento=salario*0.20;
			salariofinal=salario+aumento;
			printf("\n\nNovo salario=R$%.3f",salariofinal);
			break;
		case 93 :
			aumento=salario*0.30;
			salariofinal=salario+aumento;
			printf("\n\nNovo salario=R$%.3f",salariofinal);
			break;
		default :
		 	aumento=salario*0.355;
			salariofinal=salario+aumento;
			printf("\n\nNovo salario=R$%.3f",salariofinal); 
	}
	diferenca=salariofinal-salario;
	printf ("\n\n\n\nO salario antigo era R$%.3f,o novo R$%.3f,e a diferenca R$%.3f\n\n", salario, salariofinal, diferenca);
	system("pause");
}
