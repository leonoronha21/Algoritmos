/*Ler uma vari�vel de 10 elementos num�ricos e verificar se existe elementos iguais a 30.
Se existirem, escrever as posi��es em que est�o armazenadas.
*/
#include <stdio.h>
int main (void)
{
    int c,variavel[10];
    
    for (c=0;c<10;c++)
    {
        printf("Informe a variavel %d:", c);
        scanf("%d", &variavel[c]);
    } 
     for (c=0;c<10;c++)
     {
        if (variavel[c]==30)
        {
                           printf("A posicao %d\n", c);
        }
     }
    system("pause");
}
    
