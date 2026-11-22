// Números Impares 16

#include <stdio.h>

int main() {

    int N;
    int i = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    while (i <= N) {
        printf("%d\n", i);
        i += 2;
    }
   
    return 0;
}