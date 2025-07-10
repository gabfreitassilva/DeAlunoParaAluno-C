// Programa para identificar se o primeiro número digitado é
// divisível pelo segundo número digitado.
#include <stdio.h>

int main() {
    int primeiroNumero = 0, segundoNumero, resultadoDivisao = 0;

    printf("Digite o primeiro número:");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número:");
    scanf("%d", &segundoNumero);

    resultadoDivisao = primeiroNumero % segundoNumero;

    if (segundoNumero == 0) {
        printf("Divisão por zero é invalida.\n");
    } else {
        if (resultadoDivisao == 0) {
            printf("A divisão é exata.\n");
        } else {
            printf("A divisão não é exata.\n");
        }
    }

    return 0;
}