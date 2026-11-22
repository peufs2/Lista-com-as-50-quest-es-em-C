// Maior entre três número 08 

#include <stdio.h>

int main() {

    int num1;
    int num2;
    int num3;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    num1 > num2 && num1 > num3 ? printf("O numero 1 e maior.") :
    num2 > num1 && num2 > num3 ? printf("O numero 2 e maior.") :
    num3 > num1 && num3 > num2 ? printf("O numero 3 e maior.") :
    num1 == num2 && num2 == num3 ? printf("Os tres numeros sao iguais.") :
    				printf("Dois numeros compartilham o mesmo valor.") ;

    return 0;
}