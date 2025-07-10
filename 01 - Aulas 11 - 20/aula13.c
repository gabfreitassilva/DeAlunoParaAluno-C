#include <stdio.h>

int main() {
    int idade;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    if(idade >= 18) {
        printf("Você já é maior de idade.\n");
    } else {
        printf("Você ainda não é maior de idade.\n");
    }

    return 0;
}