// Números Pares 15

#include <stdio.h>

int main() {

    int N;
    int i = 2;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    while (i <= N) {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}