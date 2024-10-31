// Exercício 5

// Crie um programa que utiliza um ponteiro para percorrer e imprimir os elementos de um array de 5 inteiros. Não utilize índices para acessar os elementos, apenas o ponteiro.

#include <stdio.h>
int main () {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Ponteiro apontado para o primeiro elemento do array

    printf("Elementos do array: \n");
    for (int i = 0; i < 5; i++) {
        // Acessando o elemento atual e movendo o ponteiro para o proximo
        printf("%d, ", *ptr);
        ptr++; // Incrementando o ponteiro para o próximo elemento
    }

    printf("\n");

    return 0;


}