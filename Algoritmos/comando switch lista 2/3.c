#include <stdio.h>
int main (void)
{
	int numerosemana;
	
	printf("Digite o numero correspondente ao dia da semana(1 a 7):");
	scanf("%d",&numerosemana);
	
	switch (numerosemana)
	{
		case 1 :
       	printf ("\n\nDomingo\n\n");
     	break;
 
     	case 2 :
       	printf ("\n\nSegunda\n\n");
     	break;
 
     	case 3 :
        printf ("\n\nTerça\n\n");
     	break;
 
     	case 4 :
        printf ("\n\nQuarta\n\n");
     	break;
 
     	case 5 :
        printf ("\n\nQuinta\n\n");
     	break;
 
     	case 6 :
        printf ("\n\nSexta\n\n");
     	break;
 
     	case 7 :
        printf ("\n\nSabado\n\n");
     	break;
 
     	default :
       printf ("Valor invalido!\n");
    }
	system("pause");
}
