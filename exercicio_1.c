#include<stdio.h>

// Exercício 1
// Escreva um programa que pede ao usuário para digitar dois números inteiros e, em seguida, imprime a soma desses números

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o secundo número: ");
    scanf ("%d", &num2);

    soma = num1 + num2;

    printf("A soma é = %d\n", soma);

    return 0;
}
