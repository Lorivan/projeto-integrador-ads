#include <stdio.h>
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    numero = numero * numero;
    printf("O numero digitado foi: %d\n", numero);
return 0;
}