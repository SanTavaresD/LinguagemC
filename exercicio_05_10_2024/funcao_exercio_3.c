// Exercício 2

// Faça uma função chamada fatorial que recebe um número inteiro como argumento e retorna o fatorial desse número. Utilize recursão para resolver o problema.

 #include <stdio.h>
int fatorial(int num) {
    int resultado = num; 

    for (int i = num; i >= 1; i--) {
        resultado *= i;
    }
    
    return resultado;
}

int main() {
    int fat = 0;

    printf("Fatorial de: \n");
    scanf("%d", &fat);

    printf("O fatorial de %d e: %d", fat, fatorial(fat));
}