// Número primo 27

#include <stdio.h>

int main(){

    int numero;
    int primo = 1;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    while (numero <= 0){
        printf("Digite outro numero: ");
        scanf("%d", &numero);
    }

    for (int i = 2; i < numero; i++){

        if (numero % i == 0){
            primo = 0;
        }

    }

    if (primo == 1){
        printf("O numero é primo");
    }
    else {
        printf("O numero não é primo");
    }

    return 0;
}