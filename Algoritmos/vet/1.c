/*1. Ler um vetor X de 10 elementos inteiros. Calcular a m�dia aritm�tica e copiar para um
vetor A os valores de X que est�o acima da m�dia calculada e para um vetor B os valores
que est�o abaixo da m�dia. Imprimir a m�dia calculada e os vetores A e B. OBS.: N�o
deixar espa�os vagos entre os elementos de A nem de B.
*/
#include <stdio.h>
int main(void)
{
    int vetorX[10], vetorA[10], vetorB[10], c, c1, c2;
    float soma=0,media=0;
    
    for (c=0; c<10; c++)
    {   
        printf("Digite o valor X[%d]:", c);
        scanf("%d", &vetorX[c]);
        soma=soma+vetorX[c];        
    }
    media=soma/10;
    printf("Media = %.1f", media);
    c1=0;
    for (c=0; c<10; c++)
    {
        if (vetorX[c]>media)
        {
                            vetorA[c]=vetorX[c];                                                      
                            printf("\n Vetor A [%d] = %d\n", c1, vetorA[c]);
                            c1++; 
        }
    }
    printf("---------------------------------------------------------------\n");
    c2=0;
    for (c=0; c<10; c++)
    {
        if (vetorX[c]<media)
        {
                           vetorB[c]=vetorX[c];
                           printf("\n Vetor B [%d] = %d\n", c2, vetorB[c]);
                           c2++;
        }
    }
    system("pause");
}
        
    
    
    
