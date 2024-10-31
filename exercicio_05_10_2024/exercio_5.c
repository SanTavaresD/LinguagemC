// Exercício 5

// Escreva uma função que recebe um ponteiro para um array bidimensional (matriz) de inteiros e suas dimensões. A função deve calcular e retornar a soma de todos os elementos. O array deve ser alocado dinamicamente no main().

#include <stdio.h>
#include <stdlib.h>
void preencheArray(int tamanhoUm, int tamanhoDois, int **arr){
    printf("Insira os valores do Array\n");
    for (int i = 0; i < tamanhoUm; i++){
        for (int c = 0; c < tamanhoDois; c++){
            printf("Insira um valor na posicao [%d][%d]: ", i, c);
            scanf("%d", &arr[i][c]);
        }
    }
}

int matriz(int tamanhoUm, int tamanhoDois, int** matrizBi){
    int soma = 0;

    for (int i = 0; i < tamanhoUm; i++){
        for (int c = 0; c < tamanhoDois; c++){
            soma += matrizBi[i][c];
        }
    }

    return soma;
}


int main(){
    int tamanhoUm, tamanhoDois;

    printf("Insira o numero de linhas da matriz: ");
    scanf("%d", &tamanhoUm);

    printf("Insira o numero de colunas da matriz: ");
    scanf("%d", &tamanhoDois);

    int** arr = (int**)malloc(tamanhoUm * sizeof(int*));

    // Aloca cada linha como um array de inteiros
    for (int i = 0; i < tamanhoUm; i++){
        arr[i] = (int*) malloc(tamanhoDois * sizeof(int));
    }

    preencheArray(tamanhoUm, tamanhoDois, arr);

    int soma = matriz(tamanhoUm, tamanhoDois, arr);

    printf("A soma de todos os elementos da matriz e: %d\n", soma);

    // Libera a memória alocada
    for(int i = 0; i < tamanhoUm; i++) {
        free(arr[i]);
    }
 
    free(arr);

    return 0;
}