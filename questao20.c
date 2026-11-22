// Fatorial 20


#include <stdio.h>

int main(){

    int numeros[100];
    int N;
    int quantidade = 0;

    printf("Digite um numero (0 para finalizar): ");
    scanf("%d", &N);

    while(N != 0 && quantidade < 100){

        numeros[quantidade] = N;
        quantidade++;

        if(quantidade < 100){
            printf("Digite um numero (0 para finalizar): ");
            scanf("%d", &N);
        }
    }

    printf("\nOs numeros inseridos:\n");

    for(int i = 0; i < quantidade; i++){
        printf("%d ", numeros[i]);
    }

    printf("\n\nNumeros pares:\n");

    for(int i = 0; i < quantidade; i++){
        if(numeros[i] % 2 == 0){
            printf("%d ", numeros[i]);
        }
    }

    return 0;
}