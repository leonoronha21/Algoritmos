#include <stdio.h>
int main (void)
{
	float nota;
	
	printf("Digite a nota do aluno:");
	scanf("%f",&nota);
	
	if ((nota>=1)&&(nota<=2))
	{
		printf("\n\nSituacao do aluno:Nota Pessima.\n\n");
	}
	if ((nota>=3)&&(nota<=4))
	{
		printf("\n\nSituacao do aluno:Nota Ruim.\n\n");
	}
	if ((nota>=5)&&(nota<=6))
	{
		printf("\n\nSituacao do aluno:Nota pouco ruim.\n\n");
	}
	if ((nota>=7)&&(nota<8))
	{
		printf("\n\nSituacao do aluno:Nota Boa.\n\n");
	}
	if ((nota>=8)&&(nota<=9))
	{
		printf("\n\nSituacao do aluno:Nota muito Boa.\n\n");
	}
	if (nota==10)
	{
		printf("Situacao do aluno:Nota EXCELENTE!!!\n\n");
	}
	system ("pause");
}
