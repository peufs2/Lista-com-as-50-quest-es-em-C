// Media de tres notas 04

#include <stdio.h>

int main(){

    int quantidade = 3;
    float nota;
    float soma = 0;
    float media;

    for(int i = 1; i <= quantidade; i++){

        printf("Digite sua nota: ");
        scanf("%f", &nota);

        soma = soma + nota;
    }

    media = soma / quantidade;

    printf("Sua media foi: %.2f\n", media);

    if(media >= 7){
        printf("Aprovado!");
    }
    else{
        printf("Reprovado!");
    }

    return 0;
}