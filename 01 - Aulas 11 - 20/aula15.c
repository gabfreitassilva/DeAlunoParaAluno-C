#include <stdio.h>

int main() {
    int escolha;

    printf("Menu:\n");
    printf("[ 1 ] Entrar \n[ 2 ] Cadastrar \n[ 3 ] Sair \n");
    printf("> ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Você escolheu entrar.\n");
            break;
        case 2:
            printf("Você escolheu cadastrar.\n");
            break;
        case 3:
            printf("Você escolheu sair.\n");
            break;
        default:
            printf("Valor indefinido.\n");
            break;
    }

    return 0;
}