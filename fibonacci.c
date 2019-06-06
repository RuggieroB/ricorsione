/*

	# ricorsione

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


		ricorsione

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf.
		
		

		
			- Programma "fibonacci.c": 
				Linguaggio "C":
							Programma che, mediante l'uso di una funzione ricorsiva, calcola i primi dieci elementi della serie di Fibonacci.
						
*/

#include <stdio.h>

int fibonacci(int n);

int main()
{

	int i;

	puts("\nSERIE DI FIBONACCI\n\n");

	for (i=0;i<10;i++)
	{
	
		printf("%d\t",fibonacci(i));
		
	}

	puts("\n\n");
	
	return 0;
	
}

int fibonacci(int n)

{
	if(n==0||n==1)
	{
	
		return n;
		
	}

	return (fibonacci(n-1)+fibonacci(n-2));
	
}				