#include <stdio.h>
int main() {
    int N, i, produto;

    printf("Qual tabuada voce deseja calcular?: ");
    scanf("%d", &N);

    for( i =1; i <=10; i++) {
        produto = N * i;
        printf("%d X  %d = %d", N, i, produto);
        printf("\n");
    }
 return 0;
}
