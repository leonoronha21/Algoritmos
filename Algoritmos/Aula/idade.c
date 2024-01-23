/*Comando for
*for (inicialização;controle;incremento/decremento)
*inicialização:valor inicial na variavel que controla as repetições,precisa ser variavel do tipo int(inteira).
*controle:expressao relacional.que se avaliada como V continua a repeticao,quando F encerra a repeticao.
*Incremento:operacao que mudara o valor da variavel de controle.
*/
#include <stdio.h>
int main (void)
{
    int idade;
    int contador;
   
    for (contador=0;contador<80;contador++)
   {      
          printf("\n\nDigite a idade:");
          scanf("%d",&idade);    
          printf("\n\nA idade eh %d\n\n", idade);
          printf("\n\n\nComece uma nova consulta!");
   }  
   system("pause");
}
