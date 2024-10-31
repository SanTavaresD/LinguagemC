// Arrays em C

// Um array (ou vetor) é uma coleção de elementos do mesmo tipo, armazenados em posições contíguas na memória. Vamos explorar como usar arrays.

//Exemplo 1: Declaração e inicialização de arrays
#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50}; // Declaração e inicialização

    // Acessando elementos do array
    for (int i = 0; i < 5; i++) {
        printf("Elementos %d: %d\n", i, numeros[i]);
    }

    return 0;
}

// Explicação:
// Declaração: int numeros[5] declara um array de 5 inteiros.
// Acesso: Os elementos do array são acessados usando índices (numeros[0], numeros[1],...)

// Exemplo 2: Soma de elementos de um array

// Vamos somar todos os elementos de um array
int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }

    printf("A soma dos elementos é: %d\n", soma);

    return 0;
}


