#include <stdio.h>
#define LINHA 4
#define COLUNA 4
int main (void)
{
    int matriz[LINHA][COLUNA],lin,col;
    float media=0,soma=0;
    //ENTRADA DE DADOS
    for (lin=0; lin<LINHA; lin++)
    {
        for (col=0; col<COLUNA; col++)
        {
            printf("Digite o valor [%d]-[%d]:", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }
    //PROCESSAMENTO
    for (lin=0; lin<LINHA; lin++)
    {
        for (col=0; col<COLUNA; col++)
        {
            soma=soma+matriz[lin][col];
        }
    }
    media=soma/(LINHA*COLUNA);
    //SAIDA          
    printf("A soma = %.1f\n", soma);
    printf("A media = %1.f\n", media);
    system("pause");
}
