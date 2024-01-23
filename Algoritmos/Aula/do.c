#include <stdio.h>
int main (void)
{
    float salario,media,soma=0;
    int qtt=0;
 
    printf("Informe o salario:");
    scanf("%f", &salario);
    do
    {
          qtt++;
          soma=soma+salario;
          
          printf("Informe o salario ou 0 para Sair:");
          scanf("%f", &salario);
    }
    while (salario>0);    
    media=soma/qtt;
    printf("A media de salario=%.2f\n\n", media);
    system("pause");
}
