// Escreva uma função chamada troca que receba dois ponteiros para inteiros e troca os valores das variáveis apontadas por eles

#include <stdio.h>

void troca(int *ptr_1, int *ptr_2) {
    *ptr_1 = 1;
    *ptr_2 = 2;
}

int main() {
    int num_1 = 10;
    int num_2 = 20;

    printf("Antes o num 1: %d\n", num_1);
    printf("Antes o num 2: %d\n", num_2);

    troca(&num_1, &num_2);

    printf("Depois o num 1: %d\n", num_1);
    printf("Depois o num 2: %d\n", num_2);
    
    return 0;

}