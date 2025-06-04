#include <stdio.h>
int main() {
    int numero = 5;
    unsigned long long  fatorial = 1;
    for (int i = 1; i <= numero;i++) {
        fatorial *= i;
    }
    printf("Fatorial  %llu\n", fatorial);
    return 0;
}