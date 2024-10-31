#include <stdio.h>

// Escreva um programa que verifica se um número fornecido pelo usuário é primo.

int main(){
    int primo, i, resultado = 0;

    printf("Digite um numero: ");
    scanf("%d", &primo);

    for (i = 2; i <= primo / 2; i++) {
        if (primo % i == 0){
            resultado++;
            break;
        }
    }

    if (resultado == 0) {
        printf("%d e um numero primo\n", primo);
    } else {
        printf("%d nao e um numero primo\n", primo);
    }
}
