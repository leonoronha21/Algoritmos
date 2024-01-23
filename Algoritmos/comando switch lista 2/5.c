#include <stdio.h>
main (void)
{

	float n1,n2,resultado;
	char operador;

   
	printf("Digite o primeiro numero:");
	scanf ("%f",&n1);
	printf("Digite o segundo numero:");
	scanf ("%f",&n2);
	printf("Digite o operador:");
	scanf ("%s",&operador);

	if (operador=='+') 
	{
		resultado=n1+n2; 
		printf ("\n  resultado: %.2f\n\n",resultado);}
	if (operador=='-') 
	{
		resultado=n1-n2;
		printf ("\n  resultado e: %.2f\n\n",resultado);
	}
	if (operador=='/') 
	{
		resultado=n1/n2;
		printf ("\n  resultado e: %.2f\n\n",resultado);
	} 
	if (operador=='*') 
	{
		resultado=n1*n2;
		printf ("\n resultado: %.2f\n\n",resultado);
	}
	system("pause");
}
