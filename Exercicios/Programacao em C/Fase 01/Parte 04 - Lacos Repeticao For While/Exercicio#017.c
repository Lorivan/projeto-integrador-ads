#include <stdio.h>

int main() {
    int numero, soma = 0;
    do {
        printf("Digite um numero( 0 para sair): ");
        scanf("%d", &numero);
        soma = soma +numero;
    } while (numero != 0);
    printf("Soma dos numeros digitados : %d", soma);
    return 0;
}
