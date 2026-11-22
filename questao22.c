// Media da turma 22
#include <stdio.h>

int main(){

    int quantidade;
    float nota;
    float media;
    float soma = 0;

    printf("Digite a quantidade de alunos:\n");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++){

        printf("Apresente a nota do aluno %d:\n", i);
        scanf("%f", &nota);

        soma += nota;
    }

    media = soma / quantidade;

    printf("A sala de aula possui: %d alunos\n", quantidade);
    printf("A media da turma ficou: %.2f\n", media);

    return 0;
}