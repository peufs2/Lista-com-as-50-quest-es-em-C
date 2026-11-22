// Somatório de pares 19

#include <stdio.h>

int main(){
	
	int N;
	int soma = 0; 
	
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	for (int i = 1; i<=N; i++){
	
		if (i % 2 == 0 ){
			soma += i; 
		}
	}
	
	printf("A soma dos pares: %d", soma);
	
	return 0; 
		
}