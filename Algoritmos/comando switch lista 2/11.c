#include <stdio.h>
int main (void)
{
	float nota1,nota2,nota3,media;
	char conceito;
	
	printf("Digite a primeira nota do aluno:");
	scanf("%f",&nota1);
	printf("Digite a segunda nota do aluno:");
	scanf("%f",&nota2);
	printf("Digite a terceira nota do aluno:");
	scanf("%f",&nota3);
	printf("Digite a media dos exercicios:");
	scanf("%f",&media);
	
	conceito=(nota1+nota2*2+nota3*3+media)/7;
	
	if (conceito>=9)
	{
		printf("\n\nConceito=A\n\n");
	}
	if (conceito>=7.5 && conceito<9)
	{
		printf("\n\nConceito=B\n\n");
	}
	if (conceito>=6 && conceito<7.5)
	{
		printf("\n\nConceito=C\n\n");
	}
	if (conceito<6)
	{
		printf("\n\nConceito=D\n\n");
	}
	system("pause");
}
	


