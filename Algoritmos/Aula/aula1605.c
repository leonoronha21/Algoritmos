#include <stdio.h>
int main (void)
{
    int c,notamaior=0;
    float nota;
    
    for (c=0; c<5; c++)
    {
        printf("Digite a nota do individuo:");
        scanf("%f", &nota);
        
        if (nota>7.0)
        {
                      notamaior++;
        }
        
    }
    printf("O numero de inviduos com nota maior que 7 = %d\n\n", notamaior);
    system("pause");
}
        
