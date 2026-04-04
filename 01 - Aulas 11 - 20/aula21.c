// Introdução a vetores
// A contagem de um vetor inicia no número 0, ou seja o primeiro elemento do vetor é o elemento 0.

#include <stdio.h>

int main(void) {
    float notas[5]; // Declaração de um vetor de 5 elementos do tipo float

    // Preenchendo o vetor com as notas
    for (int i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Exibindo as notas
    printf("As notas digitadas foram:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    return 0;
}