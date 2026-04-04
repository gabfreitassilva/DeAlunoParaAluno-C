// Loop aninhados
// Quando um loop é colocado dentro de outro, o loop mais interno trava o loop externo até que ele seja concluído.

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("- Loop externo: %d\n", i);
        for (int j = 1; j <= 2; j++) {
            printf("\t- Loop interno: %d\n", j);
        }
    }

    return 0;
}