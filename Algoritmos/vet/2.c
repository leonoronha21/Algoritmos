#define pos 10
#include <stdio.h>
int main (void)

/*
2. Ler um array unidimensional de 10 n�meros inteiros e exibir o array horizontalmente
conforme lido, trocar os elementos entre si, dois a dois, ou seja, os de �ndice par com os de
�ndice �mpar. Exibir novamente o array ap�s as trocas. 
*/


{
       int c1,vet[pos];
       
       for (c1=0; c1<pos; c1++)
       {
           printf (" Informe o numero da posicao %d: ", c1); scanf ("%d", &vet[c1]);
       }
       printf (" Os valores foram: ");
       for (c1=1; c1<pos; c1+=2)
       {
           printf (" %d,", vet[c1]);
           printf (" %d,", vet[c1-1]);
       }
       system ("pause");
}
       
