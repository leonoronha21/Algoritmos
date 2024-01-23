/* Escrever um programa que mostre a nota final e o sexo de um grupo de individuos.
Mostrar quantos individuos do sexo F possuem nota> 7.
*/
#include <stdio.h>
int main (void)
{
    int notamaior=0;
    float nota;
    char sexo;
    
    printf("Digite a nota do individuo:");
    scanf("%f", &nota);
            
    while (nota!=99)
    {   
        printf("Digite o sexo:");
        scanf(" %c", &sexo);          
        if ((nota>7.0)&&(sexo=='F'))
        {
                      notamaior++;
        }
        printf("Digite a nota do individuo:");
        scanf("%f", &nota);
       
     }
    printf("O numero de inviduos com nota maior que 7 = %d\n\n", notamaior);
    system("pause");
}
