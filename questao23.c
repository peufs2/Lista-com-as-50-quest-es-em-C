// Maior numero digitado 23

#include <stdio.h>

int main() {

    int numero;
    int maior;

    for(int i = 1; i <= 10; i++) {

        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if(i == 1) {			
        	maior = numero;
        }
        else if(numero > maior) {
            maior = numero;
        }
    }

    printf("O maior numero digitado foi: %d\n", maior);

    return 0;
}