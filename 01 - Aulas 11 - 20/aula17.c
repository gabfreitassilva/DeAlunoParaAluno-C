// Programa para inverter os dígitos de um número inteiro.
// O programa lê um número inteiro digitado pelo usuário e usando as lógicas de divisão e resto da divisão, inverte os
// dígitos do número e exibe o resultado na tela.
#include <stdio.h>

int main() {
    int numero = 0, numeroInvertido = 0, ultimoDigito = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        ultimoDigito = numero % 10; // Obtém o último dígito
        numeroInvertido = numeroInvertido * 10 + ultimoDigito; // Adiciona o dígito ao número invertido
        numero /= 10; // Remove o último dígito do número original
    }

    printf("O numero invertido e: %d\n", numeroInvertido);

    return 0;
}