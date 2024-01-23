#include <stdio.h>
int main (void)
{
    int anonascimento,idade;
    
    printf("Digite o ano que nasceu:");
    scanf("%d",&anonascimento);
    
    idade=2017-anonascimento;
    if(idade>=16)
    {
                 printf("\n\nPode votar\n\n");
    }
    else
    {
                 printf("\n\nNao Pode votar\n\n");
    }
    system("pause");
}
