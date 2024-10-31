// Exercicio 3

// Escreva um programa que aloca dinamicamente um array de 5 inteiros usando malloc. O usuário deve fornecer os valores para o array. Exiba todos os elementos e, ao final, libere a memória alocada com free().

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *v;
    int n = 5;

    v = (int *) malloc (n * sizeof (int));

    if (v == NULL){
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Insira %d numeros inteiros: \n", n);
    for (int c = 0; c < n; c++){
        printf("Elemento %d: ", c + 1);
        scanf("%d", &v[c]);
    }

    printf("\nOs elementos inseridos sao: \n");
    printf("[%d, %d, %d, %d, %d]", v[1], v[2], v[3], v[4], v[5]);

    free(v);
    return 0;
}

