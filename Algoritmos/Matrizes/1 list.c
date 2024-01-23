/*1. Dado uma matriz de ordem 3x3 faça um algoritmo que:
a) Calcule a soma dos elementos da primeira coluna;
b) Calcule o produto dos elementos da primeira linha;
c) Calcule a soma de todos os elementos da matriz;
d) Calcule a soma da diagonal principal
*/
#include <stdio.h>
#define linha 3
#define coluna 3
int main (void)
{
    int matriz[linha][coluna],lin,col;
    float media=0,soma=0,produto=1;
        
    //ENTRADA DE DADOS A
    for (lin=0; lin<linha; lin++)
    {
        for (col=0; col<coluna; col++)
        {
            printf("Digite o valor [%d]-[%d]:", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }
    //Processamento A
    for (lin=0; lin<linha; lin++)
    {
        for (col=0; col<coluna; col++)
        {   
            if(col==1)
            {
                     soma=soma+matriz[lin][col];
                     
            }
        }
    }
     media=soma/4;
     printf("\n");
     printf("\n");
     for (lin=0; lin<linha; lin++)
    {
        for (col=0; col<coluna; col++)
        {
            printf("[ %d ]", matriz[lin][col]);
            
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    //SAIDA A          
    printf("A soma da coluna 1 = %.1f\n", soma);
    printf("A media = %1.f\n", media);
    
    //Entrada B
           
    for (col=0; col<coluna; col++)
        {
            produto=produto*matriz[1][col];
        }
    
    printf("Produto = %.1f\n\n", produto);
    soma=0;
    //Soma Todos elementos
    
    for (lin=0; lin<linha; lin++)
    {       
        for (col=0; col<coluna; col++)
        {
                    soma=soma+matriz[lin][col];        
        }
    }
    printf("Soma de todos elementos = %.1f\n\n", soma);    
    //Diagonal
    soma=0;
    for (lin=0; lin<linha; lin++)
    {   
                      
        for (col=0; col<coluna; col++)
        { 
        }

     }
     soma=soma+matriz[0][0];
     soma=soma+matriz[1][1];
     soma=soma+matriz[2][2];
     printf("A soma da diagonal principal = %.1f\n\n", soma);
     system("pause");
}
            
    
    
