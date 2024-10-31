// Exercício 2

// Escreva uma função chamada inverterArray que recebe um ponteiro para um array de inteiros e o tamanho do array, e inverte a ordem dos elementos. Imprima o array original e o invertido.

#include <stdio.h>
#include <stdlib.h>
int inverterArray(int* arr, int tamanho) {
    int* resultado = (int*)malloc(tamanho * sizeof (int));
    int c = tamanho - 1;

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = arr[c];
        c--;
    }

    return resultado;
}

int main() {
    int tamanho;

    printf("Informe o tamanho do array: ");
    scanf("%d", &tamanho);

    int* arr = (int*)malloc(tamanho * sizeof(int));

    printf("\nInforme os elementos do array\n");
    for (int i = 0; i < tamanho; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Invertendo o array...");

    int* inversao = inverterArray(arr, tamanho);

    printf("Array original: ");
    for (int i = 0; i < tamanho; i++){
        printf("%d, ", arr[i]);
    }

    printf("Array invertido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d, ", inversao[i]);
    }
    
    free(arr);
    free(inversao);

    return 0;
}