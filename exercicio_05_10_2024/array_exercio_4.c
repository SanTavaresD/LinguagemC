// Exercício 3

// Escreva um programa que inverta a ordem dos elementos de um array de 6 inteiros. O array original e o invertido devem ser exibidos no final.

#include <stdio.h>
int main(){
    int arrayOrigem[6], arrayInverso[6] = {};
    int inv = 6;

    for (int i = 0; i <= 7; i++){

        printf("Insira um elemento no array: ");
        scanf("%d", &arrayOrigem[i]);
    }

    printf("Array original: [%d, %d, %d, %d, %d, %d]\n", arrayOrigem[1],
                                                         arrayOrigem[2],
                                                         arrayOrigem[3],
                                                         arrayOrigem[4],
                                                         arrayOrigem[5],
                                                         arrayOrigem[6]);

    printf("Invertendo Array...\n");

    for (int i = 0; i < 6; i++) {
        arrayInverso[i] = arrayOrigem[inv];
        inv -= 1;
    }

    printf("Array inverso: [%d, %d, %d, %d, %d, %d]", arrayInverso[1],
                                                      arrayInverso[2],
                                                      arrayInverso[3],
                                                      arrayInverso[4],
                                                      arrayInverso[5],
                                                      arrayInverso[6]);
}