// Dia da semana 12

#include <stdio.h>

int main (){
	
	char dia; 
	
	printf("Escolha um dia da semana: \n(1, 2, 3, 4, 5, 6, 7)\n");
	scanf(" %c", &dia);
	
	switch (dia){
		
		case '1':
			printf("Domingo");
			break;
		
		case '2':
			printf("Segunda-feira");
			break;
			
		case '3' :
			printf("Terça-feira");
			break;
			
		case '4' :
			printf("Quarta-feira");
			break;
			
		case '5' :
			printf("Quinta-feira");
			break;
			
		case '6' :
			printf("Sexta-fera");
			break;
			
		case '7' :
			printf("Sabado");
			break;
			
		default :
			printf("Opcao invalida");
			break;							
	}
	
	return 0;
}