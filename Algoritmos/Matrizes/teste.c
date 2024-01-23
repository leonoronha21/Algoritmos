/* <<<<<<< Vetores >>>>>>>> 
*Guardar +1 de um valor
*mesmo tipo de dados
*indices/ponteiros>endereços dentro do vetor.
*Estruturas unidimensionais (uma dimensao só).
         
*       <<< Matrizes >>>>>
* Linha e coluna (2 indices)
*/
#include <stdio.h>
int main (void)
{
    int matriz [3][3],l,c;
          //Linha-Coluna
          
    for (l=0; l<3; l++)
    {
        for (c=0; c<3; c++)
        {
            printf("Digite o valor da matriz [%d][%d]:", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
    printf("\n");
    for (l=0; l<3; l++)
    {
        for (c=0; c<3; c++)
        {
            printf("[ %d ]", matriz[l][c]);
            
        }
        printf("\n");
    }
    system("pause");
}

    
