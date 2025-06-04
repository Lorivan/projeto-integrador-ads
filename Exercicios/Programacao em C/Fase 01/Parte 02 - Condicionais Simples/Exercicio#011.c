#include <stdio.h>
int main(){
int idade;

printf("Digite sua idade: ");
scanf("%d", &idade);
if (idade < 12){
printf("Sua idade e %d: voce e uma Crianca\n", idade);
}else if (idade > 12 && idade < 18){
printf(" Sua idade e %d: voce e um Adolecente!\n", idade);
} else if (idade > 18 && idade < 60){
printf("Sua idade e %d: voce ja e um Adulto\n", idade);
} else{
printf("Sua idade %d: voce nao e um Idoso\n", idade);
}
return 0;
}