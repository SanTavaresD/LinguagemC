// Exercício 1

// Crie uma função chamada somaArray que recebe um ponteiro para um array de inteiros e o tamanho do array, e retorna a soma de todos os elementos. Use a função no main() com um array de 5 elementos fornecidos pelo usuário.


#include <stdio.h>
#include <stdlib.h>
int somaArray(int* arr, int tamanho){
    int resultado = 0;

    for (int i = 0; i < tamanho; i++) {
        resultado += arr[i];
    }

    return resultado;
}

int main() {
    int tamanho;

    printf("Informe o tamanho do array: ");
    scanf("%d", &tamanho);

    int* arr = (int*)malloc(tamanho * sizeof(int));

    printf("\nInforme os elementos do array\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int resultado = somaArray(arr, tamanho);

    printf("\nArray: ");
    for (int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }

    printf("Resultado: %d", resultado);

    free(arr);

    return 0;
}
