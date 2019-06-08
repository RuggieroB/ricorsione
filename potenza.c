/*

	# ricorsione

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


		ricorsione

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf.
		
		

		
			- Programma "potenza.c":
				Linguaggio "C":
							Programma che calcola la potenza intera positiva di un numero intero.
							
*/

#include <stdio.h>

int potenza(int b,int e);

int main()
{

	int b,e;
	
	puts("CALCOLO DELLA POTENZA\n\n");
	
	puts("Inserire la base:\t");
	scanf("%d",&b);
	
	puts("\nInserire l'esponente:\t");
	scanf("%d",&e);
	
	if(b==0)
	{
	
		printf("\n\n%d ^ %d =\tIMPOSSIBILE!",b,e);
	
	}
	else if(e==0)
	{
	
		printf("\n\n%d ^ %d =\t1",b,e);

	}
	else
	{
	
		printf("\n\n%d ^ %d  =\t%d",b,e,potenza(b,e));
		
	}

	puts("\n\n");
	
	return 0;
	
}

int potenza(int b,int e)
{

	if(e==1)
	{
	
		return (b);
		
	}
	else
	{
	
		return (b*potenza(b,e-1));
		
	}
	
}							