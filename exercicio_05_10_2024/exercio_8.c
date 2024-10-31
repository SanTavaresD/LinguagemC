// Exercício 8

// Implemente um programa que armazena 10 inteiros em um array alocado dinamicamente. Utilize uma função que calcule e retorne a mediana dos elementos desse array.

#include <stdio.h>
#include <stdlib.h>
void preencheArray(int* arr){
    int tamanho = 10;
    
    printf("Insira os elementos do Array: \n");
    for (int i = 0; i < tamanho; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int calculaMediana(int* arr){
    int tamanho = 10;
    int medIndex = tamanho / 2;
    int mediana = 0;

    for (int i = 0; i < tamanho - 1; i++){
        int menor = i;
        for (int j = i + 1; j < tamanho; j++){
            if (arr[j] < arr[menor]){
                menor = j;
            }
        }
        if (menor != i) {
            int temp = arr[i];
            arr[i] = arr[menor];
            arr[menor] = temp;
        }
    }

    mediana = arr[medIndex];
    
    return mediana;
}

int main(){
    int* arr = (int*) malloc (10 * sizeof(int));

    preencheArray(arr);

    int mediana = calculaMediana(arr);

    printf("A mediana do array: [%d, %d, %d, %d, %d, %d, %d, %d, %d, %d] e: %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9], mediana);
}
