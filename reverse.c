/*

	# ricorsione

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero.


		ricorsione

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero.
		
		

		
			- Programma "reverse.c":
				Linguaggio "C":
							Programma che stampa le cifre di un numero al contrario.
							
*/

#include <stdio.h>

void reverse(int num);

int main()
{

	int num;
	
	puts("Programma \"reverse.c\":\n"
	"Programma in Linguaggio \"C\" che stampa le cifre di un numero al contrario.\n\n");
	
	puts("Inserire un numero:\t");
	scanf("%d",&num);
	
	printf("Numero inserito:\t%d",num);
	
	puts("\n\nNumero con cifre invertite:\t");
	
	reverse(num);
	
	puts("\n\n");
	
	return 0;
	
}

void reverse(int num)
{
	if(num==0)
	{
	
		return;
		
	}
	
	printf("%d",num%10);
	
	reverse(num/10);
	
}	
