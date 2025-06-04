#include <stdio.h>
int main() {
    int numero =5 ;
    int contador = 1;
    unsigned long long fatorial = 1;
    printf("Digite um numero: ");
    scanf("%d", &numero);

        while (contador <= numero) {
            fatorial*=contador;
         contador++;
      }
    printf("Fatorial  de %d = %llu", numero,fatorial);
return 0;
}