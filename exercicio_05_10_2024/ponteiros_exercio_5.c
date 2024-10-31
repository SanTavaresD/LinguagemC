// Exercício

// Implemente uma função que recebe dois arrays de inteiros e suas respectivas dimensões como ponteiros e retorna um array resultante da multiplicação dos elementos correspondentes. O array resultante deve ser alocado dinamicamente.


#include <stdio.h>
#include <stdlib.h>

// Função que multiplica dois arrays e retorna um array alocado dinamicamente
int* multiplicarArrays(int* arr1, int* arr2, int tamanho) {
    // Aloca memória para o array resultante
    int* resultado = (int*)malloc(tamanho * sizeof(int));

    // Verifica se a alocação foi bem sucedida
    if (resultado == NULL){
        printf("Erro ao alocar memoria\n");
        exit(1); // Termina o programase houver falha na alocação
    }

    // Multiplica os elementos correspondentes e armazena no array resultado
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = arr1[i] * arr2[i];
    }

    return resultado; // retorna o ponteiro para o array resultante
}

int main(){
    int tamanho;

    // Solicita ao usuário o tamanho dos arrays
    printf("Infome o tamanho dos arrays: ");
    scanf("%d", &tamanho);

    // Aloca dinamicamente os dois arrays 
    int* arr1 = (int*)malloc(tamanho * sizeof(int));
    int* arr2 = (int*)malloc(tamanho * sizeof(int));

    // Verifica se a alocação foi bem sucedida
    if (arr1 == NULL || arr2 == NULL){
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    // Recebe os valores para o primeiro array
    printf("Informe os elementos do primeiro array: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Recebe os valores para o segundo array
    printf("Informe os elementos do segundo array: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Chama a função para multiplicar os arrays
    int* resultado = multiplicarArrays(arr1, arr2, tamanho);

    // Exibe os elementos do array resultante
    printf("\nArray resultante da multiplicacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d, ", resultado[i]);
    }
    printf("\n");

    // Libera a memória alocada dinamicamente
    free(arr1);
    free(arr2);
    free(resultado);

    return 0;
    
}