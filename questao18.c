// Soma de 1 até N 18
#include <stdio.h>

int main(){

    int N;
    int soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        soma += i;
    }

    printf("Resultado da soma: %d\n", soma);

    return 0;
}