#include <stdio.h>
int main(){
    int num01, num02, num03;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num01);
    printf("Digite o segundo numero: ");
    scanf("%d", &num02);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num03);

    if (num01 > num02 && num01>  num03){
    printf("O maior numero e o %d: que representa o numero um\n",num01);

    }else if (num02 > num01 && num02 > num03){
    printf("O maior numero e o %d: que representa o numero dois\n",num02);
    }  else{
    printf("O maior numero e o %d: que representa o tres\n",num03);
    }
    return 0;
}