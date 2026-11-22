// Quantidade de positivos e negativos 21


#include <stdio.h>

int main() {

    int numero;
    int positivos = 0;
    int negativos = 0;
    int zeros = 0;

	for(int i = 1; i <= 10; i++) {

        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if(numero > 0) {
            positivos++;
        }
        else if(numero < 0) {
            negativos++;
        }
        else{
        	zeros++;
		}
    }

    printf("Quantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Quantidade de zeros: %d\n", zeros);

    return 0;
}