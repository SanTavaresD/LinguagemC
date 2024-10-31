// Exercício 3

// Faça um programa que leia dois arrays de 5 inteiros, some os valores correspondentes dos dois arrays e armazene o resultado em um terceiro array. Imprima o array resultante.

#include <stdio.h>
int main(){
    int arrayUm[5], arrayDois[5], arrayTres[5] = {};

    for (int i = 0; i <= 5; i++){

        printf("Insira o elemento %d no primeiro array: ", i);
        scanf("%d", &arrayUm[i]);

        printf("Insira o elemento %d no segundo array: ", i);
        scanf("%d", &arrayDois[i]);

        arrayTres[i] = arrayUm[i] + arrayDois[i];
        printf("\n%d\n\n", arrayTres[i]);
    }

    printf("Array um: [%d, %d, %d, %d, %d]\n", arrayUm[1],
                                               arrayUm[2],
                                               arrayUm[3],
                                               arrayUm[4],
                                               arrayUm[5]);
    printf("Array dois: [%d, %d, %d, %d, %d]\n", arrayDois[1],
                                                 arrayDois[2],
                                                 arrayDois[3],
                                                 arrayDois[4],
                                                 arrayDois[5]);

    printf("Array resutante: [%d, %d, %d, %d, %d]", arrayTres[1],
                                                    arrayTres[2],
                                                    arrayTres[3],
                                                    arrayTres[4],
                                                    arrayTres[5]);
}