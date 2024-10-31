// Ponteiros em C

// Um ponteiro é uma variável que armazena o endereço de outra variável. Eles são muito poderosos e amplamente utilizados em C.

// Exemplo 1: Ponteiros básico
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num; // Ponteiro para o endereço de num

    // Exibindo o valor e o endereço
    printf("Valor de num: %d\n", num);
    printf("Endereco de num: %p\n", &num);
    printf("Valor de ptr (endereco): %p\n", ptr);
    printf("Valor apontado por ptr: %d\n", *ptr);

    return 0;
}

// Explicação:

// Declaração: int *ptr declara um ponteiro para um inteiro
// Atribuição: ptr = &num atribui o endereço de num ao ponteiro ptr
// Desreferenciamento: *ptr obtém o valor armazenado no endereço apontado pelo ponteiro

// Exemplo 2: Alterando valores usando ponteiros
// Vamos alterar o valor de uma variavel usando um ponteiro

void alterarValor(int *ptr) {
    *ptr = 20;
}

int main() {
    int num = 10;
    printf("Antes: %d\n", num);

    alterarValor(&num); // Passando o endereço da variavel

    printf("Depois: %d\n", num);

    return 0;
}

