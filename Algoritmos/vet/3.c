#define POS 4
#include <stdio.h>
int main (void)

/*
3. Ler um vetor de 10 elementos inteiros. Ap�s isto, imprimir na tela os 10 valores lidos e
o usu�rio poder� escolher um destes valores para ser exclu�do do vetor. Ler o valor
escolhido elimin�-lo do vetor. No momento da exclus�o todos os valores posteriores ao
valor escolhido dever�o ser reorganizados (movidos uma posi��o para a esquerda) a fim de
que o vetor resultante n�o fique com espa�o em branco. A �ltima posi��o dever� aparecer
com o valor zero e n�o com o �ltimo valor duplicado. Imprimir o novo vetor.
*/

{
    int cont1, vet[POS], ap;
    char flag='R'; 
    
    for (cont1=0; cont1<POS; cont1++)
    {
        printf (" Informe o valor da posicao %d: ", cont1); scanf ("%d", &vet[cont1]);
    }
    printf (" Agora informe um valor que deseja excluir do vetor: "); scanf ("%d", &ap);
    cont1=0;
    while (flag != 'E')
    {
          if (vet[cont1] == ap)
             {
             for (cont1;cont1<POS; cont1++)
                 {
                 vet[cont1] = vet[cont1+1];
                 }
             flag = 'E';
             }
          cont1++;
    }
    for (cont1=0; cont1<POS; cont1++)
    {
        printf ("\n pos %d valor %d. ", cont1, vet[cont1]);
    }
    
    system ("pause");
}
