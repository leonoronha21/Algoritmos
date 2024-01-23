#include <stdio.h>
int main (void)



{
    int estoque[5]={1200,3700,3737,5214,9612}, cont1;
    float valor[5]={2.30,1.99,3.55,0.65,9.21}, total=0, produto[5];
    
        
    for (cont1=0; cont1<5; cont1++)
    {
        total += estoque[cont1] * valor[cont1];
        produto[cont1] = estoque[cont1] * valor[cont1];
    }
    printf ("\n%.3f", total);
    
    for (cont1=0; cont1<5; cont1++)
    {
        printf ("\n produto %d valor %f", cont1+1, produto[cont1]);
    }
    
    system ("pause");
}
