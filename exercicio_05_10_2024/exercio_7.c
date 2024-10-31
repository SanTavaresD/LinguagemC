// Exercício 7

// Crie uma função chamada ordenarArray que utiliza o algoritmo de ordenação por seleção (selection sort) para ordenar um array de inteiros passado como ponteiro. O tamanho do array também deve ser passado como argumento.

#include <stdio.h>
#include <stdlib.h>
void preencherArray(int* arr, int tamanho) {
    printf("Preencha os valores do Array \n");
    for (int i = 0; i < tamanho; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void ordernarArray(int* arr, int tamanho){
    
    for (int c = 0; c < tamanho - 1; c++){
        int menor = c;
        for (int i = c + 1; i < tamanho; i++){
            if (arr[i] < arr[menor]){
                menor = i;
            }
        }
        if (menor != c) {
            int temp = arr[c];
            arr[c] = arr[menor];
            arr[menor] = temp;
        }
    }
}

int main(){
    int tamanho;

    printf("Informe o tamanho do array: \n");
    scanf("%d", &tamanho);

    int* arr = (int*) malloc (tamanho * sizeof(int));

    preencherArray(arr, tamanho);

    ordernarArray(arr, tamanho);

    printf("Array original \n");
    for (int i = 0; i < tamanho; i++){
        printf("Posicao [%d]: %d\n", i, arr[i]);
    }

    free(arr);

    return 0;

}