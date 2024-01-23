#include <stdio.h>
int main (void)
{
	int cont, vetorR[5], vetorS[10], vetorX[15], cont2;
	for (cont=0; cont<5; cont++)
	{
        printf ("informe os valores de R:");
		scanf ("%d", &vetorR[cont]);
	}
	for (cont=0; cont<10; cont++)
	{
        printf ("informe os valores de S:");
		scanf ("%d", &vetorS[cont]);
    }
	for (cont=0; cont<5; cont++)
	{
        vetorX[cont]=vetorR[cont];
    }
    cont2=5;
    for (cont=0; cont<10; cont++)
    {
        vetorX[cont2]=vetorS[cont];
        cont2++;
    }
    	for (cont=0; cont<15; cont++)
	{
		printf ("vetorX:%d\n", vetorX[cont]);
	}
	//separaçao
	for (cont=0; cont<5; cont++)
	{
        vetorR[cont]=vetorX[cont];
        printf ("vetor R:%d\n", vetorR[cont]);
    }
    cont2=5;
    for (cont=0; cont<10; cont++)
    {
        vetorS[cont]=vetorX[cont2];
        cont2++;
        printf ("vetor S:%d\n", vetorS[cont]);
    }
    	
	system ("pause");
}
