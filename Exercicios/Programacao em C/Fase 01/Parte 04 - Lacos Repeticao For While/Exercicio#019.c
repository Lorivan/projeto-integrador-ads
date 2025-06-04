#include <stdio.h> // Biblioteca padrão de entrada e saída (necessária para printf e scanf)

int main() {
    int idades[5];       // Vetor para armazenar 5 idades digitadas pelo usuário
    float media;         // Variável para armazenar a média das idades
    int soma = 0;        // Variável para acumular a soma das idades, iniciada com 0

    // Loop para ler 5 idades do usuário
    for (int i = 0; i < 5; i++) {
        printf("Digite a idade : ");     // Solicita a idade ao usuário
        scanf("%d", &idades[i]);         // Lê a idade e armazena na posição i do vetor
    }

    // Loop para somar todas as idades armazenadas no vetor
    for (int i = 0; i < 5; i++) {
        soma += idades[i];               // Adiciona cada idade à variável soma
    }

    media = soma / 5.0; // Calcula a média das idades (usando 5.0 para garantir resultado com ponto flutuante)

    printf("Media = %.2f", media); // Exibe a média com duas casas decimais

    return 0; // Finaliza o programa com sucesso
}
