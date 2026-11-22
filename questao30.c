// Jogo de adivinhação 30

#include <stdio.h>

int main(){

    int secreto = 25;
    int palpite;
    int tentativas = 0;

    printf("Tente adivinhar o numero secreto!\n");

    do {

        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite < secreto){
            printf("O numero secreto e maior!\n");
        }
        else if (palpite > secreto){
            printf("O numero secreto e menor!\n");
        }
        else {
            printf("Parabens! Voce acertou!\n");
        }

    } while (palpite != secreto);

    printf("Quantidade de tentativas: %d", tentativas);

    return 0;
}