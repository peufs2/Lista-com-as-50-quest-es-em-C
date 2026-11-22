// Senha de acesso 26 


#include <stdio.h>

int main(){

    int senha;
    int acesso = 2026;

    printf("Informe sua senha: ");
    scanf("%d", &senha);

    while(senha != acesso){

        printf("Acesso negado!\nTente novamente: ");
        scanf("%d", &senha);

    }

    printf("Acesso liberado!\n");

    return 0;
}