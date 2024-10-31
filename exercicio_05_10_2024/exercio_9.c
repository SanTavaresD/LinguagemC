// Execício 9

// Escreva um programa que utiliza uma função chamada pesquisarElemento para pesquisar um valor dentro de um array de inteiros. A função deve usar ponteiros e retornar o índice do valor encontrado ou -1 se o valor não estiver presente.

#include <stdio.h>
#include <stdlib.h>
void preencherArray(int* arr, int tamanho){
    printf("Preencha os elementos no array \n");
    for (int i = 0; i < tamanho; i++){
        printf("Posicao [%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

int pesquisarElemento(int* arr, int elemento, int tamanho){
    int indiceEncontrado = -1;

    for (int i = 0; i < tamanho; i++){
        if (arr[i] == elemento){
            indiceEncontrado = i;
            break;
        }
    }

    return indiceEncontrado;
}

int main(){
    int tamanho;
    int elemento = 0;

    printf("Defina o tamanho do array: ");
    scanf("%d", &tamanho);

    printf("Qual elemento devera ser encontrado?: ");
    scanf("%d", &elemento);

    int* arr = (int*) malloc (tamanho * sizeof(int));

    printf("Preenchendo Array...\n");
    preencherArray(arr, tamanho);

    for (int i = 0; i < tamanho; i++){
        printf("Posicao [%d], Elemento: %d\n", i, arr[i]);
    }

    printf("Encontrando Array...\n");
    int indiceEncontrado = pesquisarElemento(arr, elemento, tamanho);

    printf("Elemento encontrado no indice [%d] do array", indiceEncontrado);

    free(arr);

    return 0;
}