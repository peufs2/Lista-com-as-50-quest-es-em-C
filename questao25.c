// Validação de entrada 25 

#include <stdio.h>

int main(){

    int nota;

    printf("Digite sua nota: ");
    scanf("%d", &nota);

    while(nota < 0 || nota > 10){

        printf("Nota invalida!\nDigite outra nota: ");
        scanf("%d", &nota);

    }

    printf("Sua nota foi: %d\n", nota);

    return 0;
}