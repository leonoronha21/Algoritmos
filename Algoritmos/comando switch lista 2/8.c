#include <stdio.h>
int main (void)
{
	char cor;
	
	printf("Digite a letra que representa a cor do sinal(V,A,E):");
	scanf("%c",&cor);
	
	switch (cor)
	{
		case 'V' :
			printf("\n\nSiga!\n\n");
			break;
		case 'A' :
			printf("\n\nAtencao!\n\n");
			break;
		case 'E' :
			printf("\n\nPare!\n\n");
			break;
		
		default:
			printf("\n\nInvalido\n\n");
	}
	system("pause");

}
