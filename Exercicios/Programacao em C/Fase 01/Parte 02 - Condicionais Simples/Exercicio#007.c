#include <stdio.h>

int main() {
    int num01;
    int num02;
    printf("Digite o numero 01: ");
    scanf("%d", &num01);
    printf("Digite o numero 02: ");
    scanf("%d", &num02);
    if (num01 > num02) {
        printf("O maior numero digitado foi %d: Que representa numero 01 \n", num01);
    } else {
        printf("O maior numero digitado foi %d: Que representa numero 02 \n", num02);
    }
    return 0;
}
