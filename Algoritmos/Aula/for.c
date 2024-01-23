#include <stdio.h>
int main (void)
{
    int cont,quantidade=0;
    float salario,soma=0,media,maior=0,menor=9999999;
    
    for (cont=0;cont<5;cont++)
    {
                printf("Informe o salario do funcionario:");
                scanf("%f", &salario);
                if ((salario>=1000.00)&&(salario<=2000.00))
                {
                          quantidade=quantidade+1;
                          printf("O salario %f\n\n", salario);
                          
                }
                soma=soma+salario;
                if(salario>maior)
                {
                                 maior=salario;
                }
                if(salario<menor)
                {
                                 menor=salario;
                }              
                         
    }
    media=soma/cont;
    printf("\nA Quantidade entre o valor 1000 e 2000:%d", quantidade);
    printf("\nA soma total eh %.2f\n", soma);
    printf("\n\nA media eh %.2f\n", media);
    printf("\n\nO maior salario eh %.2f", maior);
    printf("\n\nO menor salario eh %.2f\n\n", menor);
    system("pause");
}
    

    
