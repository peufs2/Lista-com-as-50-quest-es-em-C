// Divisores de um numero 28

#include <stdio.h>

int main(){

    int N;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    while (N <= 0){
        printf("Numero invalido, digite outro numero: ");
        scanf("%d", &N);
    }

    for (int i = 1; i <= N; i++){

        if (N % i == 0){
            printf("%d / %d = %d\n", N, i, N/i);
        }
    }

    return 0;
}