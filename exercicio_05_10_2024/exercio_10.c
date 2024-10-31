// Exercício 10

// Crie uma função chamada matrizTransposta que recebe uma matriz quadrada NxN e calcula sua transposta. A matriz e sua transposta devem ser alocadas dinamicamente e passadas por ponteiro.

#include <stdio.h>
#include <stdlib.h>

void preencheArray(int** arr, int dimensao){
    printf("Preencha os valores do Array \n");
    for (int i = 0; i < dimensao; i++){
        for (int j = 0; j < dimensao; j++){
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void matrizTransposta(int** matriz, int dimensao){
    int temp;
    for (int i = 0; i < dimensao; i++){
        for (int j = 1 + i; j < dimensao; j++){
            temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }
}


int main(){
    int dimensao;

    printf("Dimensao da Matriz: ");
    scanf("%d", &dimensao);

    int** matriz = (int**) malloc (dimensao * sizeof(int*));

    for (int i = 0; i < dimensao; i++){
        matriz[i] = (int*) malloc (dimensao * sizeof(int));
    }

    preencheArray(matriz, dimensao);

    matrizTransposta(matriz, dimensao);

    printf("\n\nMatriz Transposta\n");
    for (int i = 0; i < dimensao; i++){
        for (int j = 0; j < dimensao; j++){
            printf("Posicao [%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }

    for (int i = 0; i < dimensao; i++){
        free(matriz[i]);
    }

    free(matriz);

    return 0;

}