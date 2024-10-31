#include <stdio.h>

// Crie um programa que pede um número ao usuário e verifica se ele é par ou ímpar.

int main (){
    int check;

    printf("Digite um numero: ");
    scanf("%d", &check);

    float divisivel = check % 2;

    if (divisivel = 0) {
        printf("O numero %d e par", check);
    } else {
        printf("O numero %d e impar", check);
    }

    return 0;

}