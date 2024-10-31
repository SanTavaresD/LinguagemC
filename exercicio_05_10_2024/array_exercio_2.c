// Exercício 2

// Crie um programa que leia um array de 10 inteiros fornecidos pelo usuário e imprima o maior número encontrado no array.

#include <stdio.h>
int main(){
    int array[10] = {};
    int maior;

    for (int i = 0; i < 10; i++){
        printf("Insira um numero no array: ");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++){
        if (i == 0){
            maior = array[i];
        } else if (maior < array[i]){
            maior = array[i];
        }
    }

    printf("O maior numero do array e: %d", maior);

    return 0;
}