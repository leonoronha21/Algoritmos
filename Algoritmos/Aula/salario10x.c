#include <stdio.h>
int main (void)
{
    float salario;
    int contador;
    
    for (contador=0; contador<10; contador++)
    {
        printf("Digite o valor do salario:R$");
        scanf("%f",&salario);
        
    if ((salario>=1000)&&(salario <=2000))
    {
        printf("\n\nSalario %.3f\n\n", salario);
    }
    }
    system("pause");
}                       
        
