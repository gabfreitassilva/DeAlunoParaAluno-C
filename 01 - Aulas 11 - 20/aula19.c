// Tipos de dados em linguagem C
#include <stdio.h>
#include <stdbool.h> //Para usar o tipo booleano (true/false)

int main() {

    char caractere = ' ';
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("O caractere digitado foi: %c\n", caractere);

    bool booleano = false; // Variável do tipo booleano, que pode ser true(1) ou false(0)
    printf("O valor booleano: %s\n", booleano ? "true" : "false");

    int numeroInteiro = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numeroInteiro);
    printf("O numero inteiro digitado foi: %d\n", numeroInteiro);

    float numeroDecimal = 0.0;
    printf("Digite um numero decimal: ");
    scanf("%f", &numeroDecimal);
    printf("O numero decimal digitado foi: %.2f\n", numeroDecimal);

    double numeroDouble = 0.0;
    printf("Digite um numero double: ");
    scanf("%lf", &numeroDouble);
    printf("O numero double digitado foi: %.2lf\n", numeroDouble);

    return 0;
}