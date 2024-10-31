// Exercício 5

// Crie um programa que recebe uma matriz (array bidimensional) 3x3 de números inteiros e calcula a soma de todos os elementos. Exiba a soma ao final


#include <stdio.h>
int main(){
    int matriz[3][3] = {{}, {}, {}};
    int soma = 0; 

    for (int i = 1; i <= 3; i++){
        for (int c = 1; c <= 3; c++){
            printf("Insira um numero na posicao [%d][%d] da matriz: ", i, c);
            scanf("%d", &matriz[i][c]);
            soma += matriz[i][c];
        }
    }

    printf("Matriz: [%d, %d, %d]\n", matriz[1][1],
                                     matriz[1][2],
                                     matriz[1][3]),
    printf("        [%d, %d, %d]\n", matriz[2][1],
                                     matriz[2][2],
                                     matriz[2][3]),
    printf("        [%d, %d, %d]\n", matriz[3][1],
                                     matriz[3][2],
                                     matriz[3][3]);

    printf("A soma de todos os elementos da matriz e: %d", soma);
}