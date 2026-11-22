// Par ou impar 06


#include <stdio.h>

int main () { 
	
	int par_impar;
	
	printf("Me diga um numero: ");
	scanf("%d", &par_impar);
	
	par_impar % 2 == 0 ? printf ("Par") : printf("Impar") ; 
	
	return 0; 
} 