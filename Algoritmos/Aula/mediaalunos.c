#include <stdio.h>
int main (void)
{
    float nota1,nota2,media;
    
    printf("Digite a nota 1:");
    scanf("%f",&nota1);
    printf("Digite a nota 2:");
    scanf("%f",&nota2);
    
    media=(nota1+nota2)/2;
    
    printf("\nMedia:%.1f\n\n",media);
    if (media>=7)
    {             
                 printf("APROVADO\n\n");
                 
    }
    else
    {
                printf("REPROVADO\n\n");
    }             
    system("pause");
}
