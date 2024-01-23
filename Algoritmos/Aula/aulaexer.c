#include <stdio.h>
int main (void)
{
    float percent;
    int qtanimais,qtanimaispesados;
    
    printf("Digite a quantidade animais da fazenda:");
    scanf("%f",&qtanimais);
    printf("Digite a quantidade de animais que pesam mais que 100kg:");
    scanf("%f",&qtanimaispesados);
    
    percent=qtanimaispesados*100/(float)qtanimais;
    
    printf("O percentual= %.1f%%",percent);
    
    if (percent>=6.1)
    {
                     printf("\n\nA fazenda pode enviar  gado para abate!\n\n");
    }
    else
    {
                     printf("\n\nA fazenda nao pode enviar  gado para abate!");
    }
   system("pause");
}
