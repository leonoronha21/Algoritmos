/*Escrever um programa que l� as notas dos alunos de uma determinada classe e as
armazena num vetor. Depois lista as notas que s�o menores que 5.0. O n�mero de
alunos da classe � igual a 10.
*/
#include <stdio.h>
int main (void)
{
    int c,notas[10];
    
    for (c=0;c<10;c++)
    {
        printf("Informe a nota do aluno %d:", c);
        scanf("%d", &notas[c]);
    }
    for (c=0;c<10;c++)
    {
        if(notas[c]<=5)
        {
                       printf("Aluno %d,nota %d\n", c, notas[c]);
        }
    }
    system("pause");
}
