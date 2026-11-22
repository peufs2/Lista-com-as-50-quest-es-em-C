// Maior e menor numero 24

#include <stdio.h>
	
int main(){

    int numero;
    int maior;
    int menor;
    int quantidade;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++){

        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (i == 1){
            maior = numero;
            menor = numero;
        }
        else {

            if (numero > maior){
                maior = numero;
            }

            if (numero < menor){
                menor = numero;
            }
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}