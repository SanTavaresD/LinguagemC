// Escreva uma função chamada maiorNumero que receba dois números inteiros como parâmetros e retorna o maior deles.

#include <stdio.h>

int maiorNumero(int a, int b) {
    if (a > b) {
        printf("%d e maior que %d\n", a, b);
    } else if (b > a) {
        printf("%d e maior que %d\n", b, a);
    } else if (a = b) {
        printf("%d e igual %d\n", a, b);
    }
}

int main() {
    int resultado_1 = maiorNumero(5, 4);
    int resultado_2 = maiorNumero(7, 8);
    int resultado_3 = maiorNumero(1001, 1001);
    return 0;
}