// Exercício 3

// Faça um programa que aloca dinamicamente um array de 10 inteiros. Utilize uma função para preencher o array com valores fornecidos pelo usuário. Em seguida, use outra função para calcular a média dos elementos.

#include <stdio.h>
#include <stdlib.h>
int preencherArray(int* arr) {

    printf("Insira os numeros do array: \n");
    for (int i = 0; i < 10; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    return 0;
}

int calculaMedia(int arr[], int lenArray) {
    float media, soma = 0;

    for (int i = 0; i < lenArray; i++) {
        soma += arr[i];
    }

    media = (float) soma / lenArray;

    return printf("A media do array e: %d", media);
}

int main () {
    int* arr = (int*)malloc(10 * sizeof (int));

    preencherArray(arr);

    calculaMedia(arr, 10);

    return 0;

}