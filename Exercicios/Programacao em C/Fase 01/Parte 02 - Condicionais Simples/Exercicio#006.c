#include <stdio.h>
int main() {
    int numeroDigitado;

    printf("Digite um numero: ");
    scanf("%d", &numeroDigitado);

    if (numeroDigitado >0 ) {
        printf("Numero positivo\n");
    } else if (numeroDigitado < 0) {
        printf("Numero negativo\n");
    } else  {
        printf("Numero zero");
    }
        return 0;
}