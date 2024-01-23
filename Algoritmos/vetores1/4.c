/*Leia 4 números, coloque-os em um vetor e mostre-os na ordem inversa de sua leitura. 
*/
#include <stdio.h>
int main (void)
{
    int c,numeros[4];
    
    for(c=0;c<4;c++)
    {
                     printf("informe um numero posicao na posicao %d :", c);
                     scanf("%d", &numeros[c]);
    }
    for(c=3;c>=0;c--)
    {
                     printf("posicao %d, numero=%d\n", c, numeros[c]);
    }
    system("pause");
}
