#include <stdio.h>
    int main(){
    float notaAluno;

printf("Digite a nota do aluno: ");
scanf("%f", &notaAluno);

if(notaAluno>=9){
printf("Aprovado: Nota %.1f  Excelente!\n",notaAluno);
} else if(notaAluno>=6){
printf("Aprovado: Nota %.1f  Boa!\n", notaAluno);
} else if(notaAluno <6){
printf("Reprovado: Nota %.1f Regular !",notaAluno);
}
return 0;
}