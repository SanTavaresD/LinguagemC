// Funções em C

// Uma função em C é um bloco de código que realiza uma tarefa específica e pode ser reutilizado em diferentes partes de um programa. Vamos ver como criar e utilizar funções

// Exemplo 1: Funções simples sem parâmetros e sem retorno

#include <stdio.h>

// Definição de uma função que imprime uma mensagem
void saudacao(){
    printf("Ola, bem-vindo!\n");
}

int main() {
    saudacao(); // chamada da função
    return 0;
}

// Explicação:
// Definição da função: void saudacao() define uma função que não recebe parâmetros (void indica que a função não retorna nada)

// Chamada da função: A função saudacao() é chamada no main().


// Exemplo 2: Função com parâmetros
// Agora, vejamos uma função que recebe argumentos (parâmetros).

// Função que recebe dois números e retorna a soma
int soma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = soma(5, 3); // Chamada da função com parâmetros
    printf("A soma e: %d\n", resultado);
    return 0;
}


// Exemplo 3: Função com retorno
// Agora, uma função que recebe um número e retorna seu quadrado.

// Função que retorna o quadrado de um número
int quadrado(int num) {
    return num * num;
}

int main() {
    int valor = 4;
    int resultado = quadrado(valor); // Chamada da função com argumento
    printf("O quadrado de %d é %d\n", valor, resultado);
}