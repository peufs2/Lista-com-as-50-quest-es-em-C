// Positivo, negativo e zero 05

#include <stdio.h>

int main (){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	numero == 0 ? printf("O numero é zero. ") : 	
	numero > 0 ? printf("O numero é positivo. "):
				printf("O numero é negativo");
				
	return 0; 			
}
