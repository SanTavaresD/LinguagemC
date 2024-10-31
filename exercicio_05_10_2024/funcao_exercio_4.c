// Exercício 4

// Escreva uma função chamada ehPrimo que verifica se um número inteiro passado como argumento é primo. A função deve retornar 1 (verdadeiro) se o número for primo e 0 (falso) caso contrário. Teste a função com diferentes números no main().


#include <stdio.h>
int ehPrimo(int num){
    int resultado = 0; 
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            resultado++;
            break;
        }
    }
    if (resultado == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num = 0;

    printf("Escreve um numero para checar se ele e primo: ");
    scanf("%d", &num);

    printf("%d", ehPrimo(num));
}