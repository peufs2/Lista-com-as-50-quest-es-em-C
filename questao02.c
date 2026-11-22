// Dobro, triplo, metade 02

#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Dobro: %d\n", num * 2);
    printf("Triplo: %d\n", num * 3);
    printf("Metade: %.2f\n", num / 2.0);

    return 0;
}