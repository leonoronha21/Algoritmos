/*Ler um vetor que contenha as notas de uma turma de 6 alunos. Calcular a m�dia destes
6 alunos e contar quantos alunos obteve nota acima desta m�dia calculada. Escrever a
m�dia da turma e o resultado da contagem.
*/
#include <stdio.h>
int main (void)
{
	int cont,notas[6];
	float soma=0,media=0;
	
	for(cont=0; cont<6; cont++)
	{
		printf("Digite a nota do aluno [%d]:", cont);
		scanf("%d", &notas[cont]);
		
		soma=soma+notas[cont];
	}
	for (cont=0; cont<6; cont++)
	{
		printf("A nota do aluno [%d] = %d\n", cont, notas[cont]);
	}
	media=soma/6;
	printf("A media da turma = %.1f", media);
	system("pause");
}
