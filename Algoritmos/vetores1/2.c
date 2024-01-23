/*Fazer um programa que leia um conjunto de 8 notas de alunos de uma disciplina, e as
armazena na variável nota. Determinar a maior nota.
*/
#include <stdio.h>
int main (void)
{
    int c,notas[8],maior=0;
    
    for (c=0;c<=8;c++)
    {
                    printf("Informe a nota %d:", c);
                    scanf("%d", &notas[c]);
    }
    for (c=0;c<=8;c++)
    {
        if (maior<notas[c])
        {
                           maior=notas[c];
        }
        
    }
    printf("A nota %d\n", maior);
    system("pause");
}
    
