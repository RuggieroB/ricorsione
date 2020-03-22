/*

	# ricorsione

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero.


		ricorsione

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero.
		
		

		
			- Programma "somma.c":
				Linguaggio "C":
							Programma che, mediante una funzione ricorsiva di somme per 1, somma due interi non negativi.
							
*/

#include <stdio.h>

int somma(int n1,int n2);

int main()
{

	int n1,n2;

	puts("SOMMA TRA 2 INTERI NON NEGATIVI\n\n");
	
	puts("\nInserire 2 numeri interi positivi:\n");
	
	puts("\n1° Numero:\t");
	scanf("%d",&n1);
		
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
	
	printf("\n\nLa somma tra i due valori e':\t%d",somma(n1,n2));

	puts("\n\n");
	
	return 0;
	
}

int somma(int n1,int n2)
{

	if(n2==0)
	{
	
		return n1;
		
	}

	return (1+somma(n1,n2-1));

}						
