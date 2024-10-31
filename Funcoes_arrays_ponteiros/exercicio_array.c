// Escreva um programa que armazene 10 números em um array e encontre o maior número entre eles

#include <stdio.h>

int main() {

    int lenarray = 0;
    int array[10] = {0};
    int comparacao = 0;

    printf("Qual sera o tamanho do vetor: ");
    scanf("%d", &lenarray);

    for (int i = 0; i < lenarray; i++) {
        printf("Escolha um numero: \n");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < lenarray; i++) {
        if (comparacao < array[i]) {
            comparacao = array[i];
        }
    }

    printf("O maior numero do array e: %d", comparacao);

    return 0;
}