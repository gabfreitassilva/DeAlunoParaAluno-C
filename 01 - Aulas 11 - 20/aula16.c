// Programa para identificar se o primeiro número digitado é
// divisível pelo segundo número digitado.
#include <stdio.h>

int main() {
    int primeiroNumero = 0, segundoNumero, resultadoDivisao = 0;

    printf("Digite o primeiro numero:");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo numero:");
    scanf("%d", &segundoNumero);

    resultadoDivisao = primeiroNumero % segundoNumero;

    if (segundoNumero == 0) {
        printf("Divisao por zero e invalida.\n");
    } else {
        if (resultadoDivisao == 0) {
            printf("A divisao e exata.\n");
        } else {
            printf("A divisao nao e exata.\n");
        }
    }

    return 0;
}