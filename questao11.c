// Menu de operações 11

#include <stdio.h>

int main() {

    int num1, num2, opcao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("MENU DE OPERACOES\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            printf("Resultado: %d\n", num1 + num2);
            break;

        case 2:
            printf("Resultado: %d\n", num1 - num2);
            break;

        case 3:
            printf("Resultado: %d\n", num1 * num2);
            break;

        case 4:
            if (num2 != 0) {
                printf("Resultado: %d\n", num1 / num2);
            } else {
                printf("Erro: nao e possivel dividir por zero!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}