/*

	# ricorsione

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero.


		ricorsione

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero.
	
	

	
			- Programma "sommacoda.c":
				Linguaggio "C":
							Riscrittura del programma "somma.c" con ricorsione in coda.

*/

#include <stdio.h>

int somma_helper(int n1, int n2, int parziale);

int somma(int n1, int n2);

int main()
{

	int n1,n2;
	
	puts("SOMMA TRA 2 INTERI NON NEGATIVI\n\n");
	
	puts("\nInserire 2 numeri interi positivi:\n");
	
	do
	{
	
		puts("\n1° Numero:\t");
		scanf("%d",&n1);
		
		if(n1<=0)
		{
		
			puts("\nERRORE!!! IL NUMERO DEVE ESSERE POSITIVO E MAGGIORE DI \"0\"!\n");
			
		}	/* NO 'else' FOR THIS 'if' */
		
	}
	while(n1<=0);
		
	do
	{
		
		puts("\n2° Numero:\t");
		scanf("%d",&n2);
		
		if(n2<0)
		{
		
			puts("\nERRORE!!! IL NUMERO DEVE ESSERE MAGGIORE O UGUALE A \"0\"!\n");
			
		}	/* NO 'else' FOR THIS 'if' */
		
	}
	while(n2<0);
	
	printf("\n\nLa somma aritmetica dei 2 numeri e':\t%d",somma(n1,n2));
	
	puts("\n\n");
	
	return 0;
	
}

int somma_helper(int n1, int n2, int parziale)
{

	if(n2==0)	return n1+parziale;
	
	return somma_helper(n1,n2-1,parziale+1);

}

int somma(int n1, int n2)
{

	return somma_helper(n1,n2,0);

}
