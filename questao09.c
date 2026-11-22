// Faixa etária 09

#include <stdio.h>

int main(){
	
	int idade; 
	
	printf ("Digite sua idade: ");
	scanf("%d", &idade);

	if (idade <= 0){
		printf("Idade inexistente.");
	}
	else if (idade <= 14){
		printf("Você é criança.");
	}
	else if (idade <= 17){
		printf("Você é adolescente.");
	}
	else{
		printf("Você é adulto");
	}
	
	return 0;
}