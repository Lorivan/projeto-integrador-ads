#include <stdio.h>
int main() {
    float primeiraNota;
    float segundaNota;
    float terceiraNota;
    float media;
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNota);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNota);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNota);
    media = (primeiraNota + segundaNota + terceiraNota) / 3;
    printf("Media = %.2f", media);
return 0;
}
