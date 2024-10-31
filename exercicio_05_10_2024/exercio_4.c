// Exercicio 4

// Crie um programa que utiliza uma função chamada maxMinArray para encontrar o maior e o menor valor de um array de inteiros. A função deve retornar esses dois valores usando ponteiros.


#include <stdio.h>
#include <stdlib.h>
int preencherArray(int* arr, int tamanho) {
    printf("Insira os valores no array: \n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &arr[i]);
    }   

    return 0;
}

void maxMinArray(int* arr, int tamanho, int* max, int* min) {

    *max = arr[0];
    *min = arr[0];

    for (int i = 0; i < tamanho; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        } 
        else if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}


int main() {
    int tamanho;
    int max, min;

    printf("Insira o tamanho do array: ");
    scanf("%d", &tamanho);

    int* arr = (int*)malloc(tamanho * sizeof(int));

    preencherArray(arr, tamanho);

    printf("Os valores do array sao: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d, ", arr[i]);
    }

    maxMinArray(arr, tamanho, &max, &min);

    printf("\nO maior valor do array e: %d", max);
    printf("\nO menor valor do array e: %d", min);

    free(arr);

    return 0;
    

}