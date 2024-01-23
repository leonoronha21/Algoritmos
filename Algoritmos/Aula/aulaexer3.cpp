#include <stdio.h>
int main (void)
{
    char classificacao;
    float valorcompras,valorfinal;
        
    printf("Digite o valor das compras:");
    scanf("%f",&valorcompras);
    fflush(stdin);
    printf("Digite o seu cadastro(a,b,c ou d):");
    scanf("%c",&classificacao);   
            
    if (classificacao =='a')
    {
                      valorfinal=valorcompras-(valorcompras*10)/100;
                      printf("\n\nvalor final=R$ %.2f",valorfinal);
    }
    if (classificacao =='b')
    {
                      valorfinal=valorcompras-(valorcompras*8)/100;
                      printf("\n\nvalor final=R$ %.2f",valorfinal);
    }
    if (classificacao =='c')
    {
                      valorfinal=valorcompras-(valorcompras*5)/100;
                      printf("\n\nvalor final=R$ %.2f",valorfinal);
    }
    if (classificacao =='d')
    {
                      valorfinal=valorcompras-(valorcompras*2)/100;
                      printf("\n\nvalor final=R$ %.2f",valorfinal);
    }
    if (classificacao=='a'|| classificacao=='b' || classificacao=='c' || classificacao=='d')
    {
                       
    }
    else
    {
                       printf("Classificacao invalida");
    }    
    system("pause");
    
}
