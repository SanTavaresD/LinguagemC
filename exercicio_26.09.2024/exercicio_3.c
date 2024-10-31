#include <stdio.h>

// Escreva um programa que calcula o fatorial de um número fornecido pelo usuário. O fatorial de um número n é o produto de todos os inteiros de 1 até n.

int main () {
    int fatorial, fat, resultado = 1;

    printf("Digite um numero: ");
    scanf("%d", &fatorial);

    for (fat = 1; fat <= fatorial; fat ++) {

        resultado *=  fat;
    }
  
    printf("O fatorial de %d e %d", fatorial, resultado);
}

// Fatorial de 4 = 4*3*2*1 = 24