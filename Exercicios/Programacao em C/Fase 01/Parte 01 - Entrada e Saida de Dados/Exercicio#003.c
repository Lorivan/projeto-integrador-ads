#include <stdio.h>

int main() {
    int numeroImpar;
    int numeroPar;
    int resultado;

    printf("Digite um numero Impar: ");
    scanf("%d", &numeroImpar);
    printf("Digite um numero Par: ");
    scanf("%d", &numeroPar);
    resultado = numeroImpar + numeroPar;
    printf("Resultado da soma : %d", resultado);
    return 0;
}
