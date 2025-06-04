#include <stdio.h>
    int main(){
    int numero=0;
    int numeroPositivo=0;
    int numeroNegativo=0;

for(int numero=1;numero<=10;numero ++){
printf("Digite um numero: ");
scanf("%d",&numero);
if(numero<0){
numeroNegativo++;
}else{
numeroPositivo++;
}
}
printf(" Quantidade de numeros positivos: %d",numeroPositivo);
return 0;
}