#include <stdio.h>
//3. Escreva um programa em C que leia um número inteiro e classifique-o como par ou ímpar, 
//dizendo ainda se este número é positivo, negativo ou nulo.
int main (void){
    int num;

    printf("Lista 2 - Exercício 3\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (num % 2==0){
        printf("O número %d é par\n", num);
    } else{
        printf("O número %d é ímpar\n", num);
    }
    if (num > 0){
        printf("O número %d é positivo.\n" , num);
    } else if (num < 0){
        printf("O número %d é negativo\n", num);
    } else{
        printf("O número %d é nulo\n" , num);
    }

    return 0;

}
