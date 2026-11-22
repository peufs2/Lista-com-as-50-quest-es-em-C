// Calculadora simples 10

#include <stdio.h>

int main() {

    int num1;
    int num2;
    char operador;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("Escolha um operador: (+, -, *, /)\n");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            printf("Resultado: %d", num1 + num2);
            break;

        case '-':
            printf("Resultado: %d", num1 - num2);
            break;

        case '*':
            printf("Resultado: %d", num1 * num2);
            break;

        case '/':
            printf("Resultado: %d", num1 / num2);
            break;

        default:
            printf("Opcao invalida");
            break;
    }

    return 0;
}