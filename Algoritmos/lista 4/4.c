#include <stdio.h>
int main (void)
{
	int anonascimento,anoatual,idade;
	
	printf("Digite o ano nascimento:");
	scanf("%d",&anonascimento);
	printf("Digite o ano atual:");
	scanf("%d",&anoatual);
	
	idade=anoatual-anonascimento;
	
	if(idade>=16)
	{
		printf("\n\n\nVota!\n\n\n");
	}
	else
	{
		printf("\n\n\nNao Vota!\n\n\n");
	}
	system("pause");
}
