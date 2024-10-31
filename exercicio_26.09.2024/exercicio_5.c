#include <stdio.h>

// Escreva um programa que calcula a média de cinco números inteiros fornecidos pelo usuário.

int main(){
    int num_1, num_2, num_3, num_4, num_5;
    float media;
    
    printf("Digite um numero: ");
    scanf("%d", &num_1);
   
    printf("Digite um numero: ");
    scanf("%d", &num_2);

    printf("Digite um numero: ");
    scanf("%d", &num_3);

    printf("Digite um numero: ");
    scanf("%d", &num_4);

    printf("Digite um numero: ");
    scanf("%d", &num_5);  

    media = (num_1 + num_2 + num_3 + num_4 + num_5) / 5.0;

    printf("A media e: %.2f\n", media);

    return 0;
}