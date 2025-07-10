#include <stdio.h>

int main() {
    float precoBanana;

    printf("Digite o preço da banana: R$ ");
    scanf("%f", &precoBanana);

    if(precoBanana > 5.12 && precoBanana < 8) {
        printf("A banana já foi mais barata.\n");
    } else if(precoBanana < 5.12) {
        printf("A banana está barata.\n");
    } else if(precoBanana > 8) {
        printf("A banana está muito cara.\n");
    }

    return 0;
}