// Exercício 1

// Crie uma função chamada quadrado que recebe um número inteiro como parâmetro e retorna o quadrado desse número. Chame a função no main() e exiba o resultado.

#include <stdio.h>

int quadrado(int num) {
    return num * num;
}


int main() {
    int num, resultado = 0;

    printf("Numero: \n");
    scanf("%d", &num);

    resultado = quadrado(num);

    printf("O quadrado de %d e: %d", num, resultado);

    return 0;
}