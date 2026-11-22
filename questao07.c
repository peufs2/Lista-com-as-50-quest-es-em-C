// Maior entre dois número 07 

#include <stdio.h>

int main() {

    int num1;
    int num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);


    num1 > num2 ? printf("O numero 1 e maior.") :
    num2 > num1 ? printf("O numero 2 e maior.") :
   		printf("Os numeros compartilham o mesmo valor.") ;

    return 0;
}