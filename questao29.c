// Sequência de Fibonacci 29

#include <stdio.h>

int main(){

    int N;
    int anterior = 0;
    int atual = 1;
    int proximo;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &N);

    while (N <= 0){
        printf("Digite uma quantidade valida: ");
        scanf("%d", &N);
    }

    for (int i = 0; i < N; i++){

        printf("%d ", anterior);

        proximo = anterior + atual;

        anterior = atual;

        atual = proximo;

    }

    return 0;
}