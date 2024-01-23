#include <stdio.h>
int main(void)
{
	int vet[20],c,sinalizador=0;
	
	for (c=0; c<20; c++)
	{
		printf("Digite o valor da posicao [%d]:", c);
		scanf("%d", &vet[c]);
	}
	printf("----------------------------------------------------------\n");
	for (c=0; c<20; c++)
	{
        if (vet[c]==4)
        {
                      printf(" a posicao do numero 4 = [%d]", c);
                      sinalizador++;
        }
    }
    if (sinalizador==0)
    {
       printf("Nao existe 4\n");
    }
    system("pause");
}
