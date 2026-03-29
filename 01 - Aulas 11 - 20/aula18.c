// Operador condicional (if ternário)
#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &numero2);

    printf("O primeiro numero e maior que o segundo numero? ");
    numero1 > numero2 ? printf("sim\n") : printf("nao\n");

    return 0;
}