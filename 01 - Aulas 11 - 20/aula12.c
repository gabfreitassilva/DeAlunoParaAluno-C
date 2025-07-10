#include <stdio.h>

int main() {
    int i = 0;

    while(i > 0) {
        printf("Laço while\n");
        //i--;
    }

    do {
        printf("Laço do while\n");
       // i++;
    } while(i == 3);

    return 0;
}