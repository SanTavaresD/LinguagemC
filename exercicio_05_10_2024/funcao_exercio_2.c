// Exercicio 2

// Escreva uma função chamada maiorNumero que recebe dois inteiros e retorna o maior entre eles. Use esta função no main() para exibir o maior número entre dois números fornecidos pelo usuário.

#include<stdio.h>
int maiorNumero(int num_1, int num_2){
    
    if (num_1 > num_2) {
        return num_1;
    } else {
        return num_2;
    }
}

int main() {
    int num1, num2, maior = 0;
    
    printf("Primeiro numero: \n");
    scanf("%d", &num1);

    printf("Segundo numero: \n");
    scanf("%d", &num2);

    maior = maiorNumero(num1, num2);

    printf("O maior numero e o %d", maior);

    return 0;
}