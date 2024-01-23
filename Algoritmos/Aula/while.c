/*While (condição)
{
}
flag:
*/

#include <stdio.h>
int main (void)
{
    int c,notamaior=0;
    float nota;
    
    printf("Digite a nota do individuo:");
    scanf("%f", &nota);
    
    while (nota!=99)
    {             
        if (nota>7.0)
        {
                      notamaior++;
        }
        printf("Digite a nota do individuo:");
        scanf("%f", &nota);
        
     }
    printf("O numero de inviduos com nota maior que 7 = %d\n\n", notamaior);
    system("pause");
}
