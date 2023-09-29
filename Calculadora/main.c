#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {
setlocale (LC_ALL, "Portuguese");

	int opcao, num1,num2;
	printf ("1 - Soma\n2 - Subtraçao\n3 - Multiplicacao\n4 - Divisao\n5 - sair\n\n");
	scanf ("%d", &opcao);
	
	if(opcao)
	printf ("Digite dois valores: ");
	scanf ("%d%d",&num1, &num2);
	
	switch(opcao){
	    case 0:
			printf ("Saindo...\n");
			break; 
		case 1:
			printf ("Soma: %d\n", num1 + num2);
			break;
		case 2:
			printf ("Subtraçao: %d\n", num1 - num2);
			break;
		case 3:
			printf ("Multiplicaçao : %d\n", num1 * num2);
			break;
		case 4:
			if (num2 == 0) {
				printf ("Nao existe divisao por zero!\n Digite outro valor"); 
				scanf ("%d, &num2 ");
		}	
			printf ("Divisao: %d\n", num1 / num2);
			break;
			}
			
	return 0;
}
