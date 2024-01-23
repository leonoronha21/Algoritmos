#include <stdio.h.>
#define TAM 10
int main (void)

{
	int vetA[TAM], vetB[TAM], vetC[TAM*2], i, iA=0, iB=0, iC=0, contA=0, contB=0, contC=0, flag=0;
	
	for (i=0; i<TAM; i++)
	{
		vetA[i]=0;
		vetB[i]=0;
		printf ("%d %d\n", vetA[i], vetB[i]);
	}	
	printf ("\n\n");
	for (i=0; i<TAM*2; i++)
	{
		vetC[i]=0;
		printf ("%d\n", vetC[i]);
	}
	printf ("\n\n\n");
	
	for (i=0; i<TAM; i++)
	{
		printf ("%d Informe A:", i); scanf ("%d", &vetA[i]);
		
		if ((vetA[i] > 0) && ((flag==0) || (flag==1)))
			flag++;
		while ((vetA[i] > 0) && (vetA[i] <= vetA[i-1]) && (flag>1))
		{
				printf ("%d Incorreto. Informe A:", i); scanf ("%d", &vetA[i]);
		}
		if (vetA[i] > 0)
			contA++;
		if (vetA[i] < 1)
		{
			vetA[i]=0;
			i=TAM;
		}
	}
	
	flag=0;
	for (i=0; i<TAM; i++)
	{
		printf ("%d Informe B:", i); scanf ("%d", &vetB[i]);
		
		if ((vetB[i] > 0) && ((flag==0) || (flag==1)))
			flag++;
		while ((vetB[i] > 0) && (vetB[i] <= vetB[i-1]) && (flag>1))
		{
				printf ("%d Incorreto. Informe B:", i); scanf ("%d", &vetB[i]);
		}
		if (vetB[i] > 0)
			contB++;
		if (vetB[i] < 1)
		{
			vetB[i]=0;
			i=TAM;
		}
			
	}
	
	for (i=0; i<TAM*2; i++)
	{
		if ((vetA[iA] <= vetB[iB]) && (vetA[iA] != 0))
		{
			vetC[iC] = vetA[iA];
			iC++; iA++;
		}
		if ((vetB[iB] <= vetA[iA]) && (vetB[iB] != 0))
		{
			vetC[iC] = vetB[iB];
			iC++; iB++;
		}
		if ((iA == contA) && (iB < TAM))
		{
			vetC[iC] = vetB[iB];
			iC++; iB++;
		}	
		if ((iB == contB) && (iA < TAM))
		{
			vetC[iC] = vetA[iA];
			iC++; iA++;
		}	
	}
	
	
	
	for (i=0; i<TAM; i++)
		printf (" %d	%d\n", vetA[i], vetB[i]);
	printf ("\n\n");
	for (i=0; i<TAM*2; i++)
		printf ("\n%d", vetC[i]);
		
	printf ("\n\n	%d	%d \n\n", contA, contB);
	system ("pause");
}
