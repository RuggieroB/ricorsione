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

#include <stdlib.h>

#include <math.h>

int abs(int e);

int potenza(int b,int e);

int calcolo_potenza(int b,int e);

int main()
{

	int b,e;
	
	puts("CALCOLO DELLA POTENZA\n\n");
	
	puts("Inserire la base:\t");
	scanf("%d",&b);
	
	puts("\nInserire l'esponente:\t");
	scanf("%d",&e);
	
	potenza(b,e);

	puts("\n\n");
	
	return 0;
	
}

int potenza(int b,int e)
{

	if(b==0)
	{
	
		return (printf("\n\n%d ^ %d =\t0",b,e));
	
	}
	else if(e==0)
	{
	
		return (printf("\n\n%d ^ %d =\t1",b,e));

	}
	else if(e==1)
	{
	
		return (printf("\n\n%d ^ %d  =\t%d",b,e,calcolo_potenza(b,e)));
		
	}
	else if(e<0)
	{
	
		return (printf("\n\n%d ^ %d = 1/(%d)^%d = 1/%d",b,e,b,abs(e),calcolo_potenza(b,e)));

	}
	else
	{
	
		return (printf("\n\n%d ^ %d  =\t%d",b,e,calcolo_potenza(b,e)));
		
	}
	
}

int calcolo_potenza(int b,int e)
{

	if(e==1)
	{
	
		return (b);
		
	}
	if(e<0)
	{
	
		e=abs(e);
	
		return (b*calcolo_potenza(b,e-1));
	
	}
	else
	{
	
		return (b*calcolo_potenza(b,e-1));
		
	}
	
}						