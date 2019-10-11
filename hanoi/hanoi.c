/*

	# ricorsione

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


		ricorsione

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf.
		
		

		
			- Directory "hanoi":
				- Programma "hanoi.c": 
							Risoluzione di una Torre di Hanoi a n dischi.
						
*/

#include <stdio.h>

void hanoi(int n, int start,int end, int temp);

int main()
{

	int n,start=1,end=3,temp=2;

	do
	{
	
		puts("Inserire il numero di dischi della \"Torre di Hanoi\":");
		scanf("%d",&n);
		
		if(n<=0)
		{
		
			puts("\nERRORE! Il valore deve eseere maggiore o uguale a 1\n\n");
			
		}
	
	}
	while(n<=0);
	
	printf("\n\n");
	
	hanoi(n,start,end,temp);
	
	putchar('\n');

	return 0;
	
}

void hanoi(int n, int start,int end, int temp)
{

	if(n==1)
	{
	
		printf("%d -> %d\n",start,end);
	
	}
	else
	{
	
		hanoi(n-1,start,temp,end);
		hanoi(1,start,end,temp);
		hanoi(n-1,temp,end,start);
	
	}

}
