// Exercício 6

// Faça um programa que utilize uma função chamada multiplicarMatrizes para multiplicar duas matrizes 3x3. A função deve receber os ponteiros para as duas matrizes e o ponteiro para a matriz resultante.
#include <stdio.h>
#include <stdlib.h>
void preencherMatriz (int tamanhoUm, int tamanhoDois, int** arr) {
    printf("Insira os valores do Array:\n");
    for (int i = 0; i < tamanhoUm; i++){
        for (int c = 0; c < tamanhoDois; c++){
            printf("insira o valor na posicao [%d][%d]: ", i, c);
            scanf("%d", &arr[i][c]);
        }
    }
}

void multiplicarMatrizes (int** matrizUm, int** matrizDois, int** arrResultante, int tamanhoUm, int tamanhoDois) {

    for (int i = 0; i < tamanhoUm; i++){
        for (int c = 0; c < tamanhoDois; c++){
            arrResultante[i][c] = matrizUm[i][c] * matrizDois[i][c]; 
        }
    }
}

int main(){
    int tamanhoUm, tamanhoDois;

    printf("Insira o numero de linhas das matrizes: ");
    scanf("%d", &tamanhoUm);

    printf("\nInsira o numero de colunas das matrizes: ");
    scanf("%d", &tamanhoDois);

    int** matrizUm = (int**) malloc (tamanhoUm * sizeof(int*));

    for (int i = 0; i < tamanhoUm; i++){
        for (int c = 0; c < tamanhoDois; c++){
            matrizUm[i] = (int*) malloc (tamanhoDois * sizeof(int));
        }
    }

    printf("Preencha a matriz um\n");
    preencherMatriz(tamanhoUm, tamanhoDois, matrizUm);

    int** matrizDois = (int**) malloc (tamanhoUm * sizeof(int*));

    for (int i = 0; i < tamanhoUm; i++){
        for (int c = 0; c < tamanhoDois; c++){
            matrizDois[i] = (int*) malloc (tamanhoDois * sizeof(int));
        }
    }

    printf("Preencha a matriz dois\n");
    preencherMatriz(tamanhoUm, tamanhoDois, matrizDois);

    
    int** arrResultante = (int**) malloc (tamanhoUm * sizeof(int*));

    for (int i = 0; i < tamanhoUm; i++) {
        for (int c = 0; c < tamanhoDois; c++){
            arrResultante[i] = (int*) malloc (tamanhoDois * sizeof(int));
        }
    }

    printf("Multiplicando as matrizes...\n");
    multiplicarMatrizes(matrizUm, matrizDois, arrResultante, tamanhoUm, tamanhoDois);

    for (int i = 0; i < tamanhoUm; i++){
        for (int c = 0; c < tamanhoDois; c++){
            printf("Posicao [%d][%d]: %d\n", i, c, arrResultante[i][c]);
        }
    }

    for (int i = 0; i < tamanhoUm; i++){
        free(matrizUm[i]);
        free(matrizDois[i]);
        free(arrResultante[i]);
    }

    free(matrizUm);
    free(matrizDois);
    free(arrResultante);

    return 0;
}