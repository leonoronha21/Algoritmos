#define POS 5
#include <stdio.h>
int main (void)


/*
5. Fa�a um programa para ler 10 n�meros inteiros, colocando-os em um vetor. Crie dois
outros vetores: um para armazenar apenas os n�meros positivos (maior ou iguais a zero) e
outro para armazenar apenas os n�meros negativos. Coloque os n�meros positivos no vetor
de positivos e os n�meros negativos no vetor de negativos. Mostre na tela os tr�s vetores.
Obs.: Os vetores de positivos e negativos n�o dever�o conter espa�os em branco entre os
valores armazenados.

*/

{
        int vet[POS], positivos[POS], negativos[POS], cont1, cont2=0, cont3=0;
        
        for (cont1=0; cont1<POS; cont1++)
        {
            printf (" Informe o valor da posicao %d: ", cont1); scanf ("%d", &vet[cont1]);
            if (vet[cont1] >= 0)
            {
                           positivos[cont2] = vet[cont1];
                           cont2++;
            }
            if (vet[cont1] < 0)
            {
                           negativos[cont3] = vet[cont1];
                           cont3++;
            }
        }
        for (cont1=0; cont1<POS; cont1++)
        {
            printf ("\n vetor 1: %d.", vet[cont1]);
        }
        for (cont1=0; cont1<cont2; cont1++)
        {
            printf ("\n positivo: %d.",positivos[cont1]);
        }
         for (cont1=0; cont1<cont3; cont1++)
        {
            printf ("\n positivo: %d.",negativos[cont1]);
        }
                      
        system ("pause");
}
