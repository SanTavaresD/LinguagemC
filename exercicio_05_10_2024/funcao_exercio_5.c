// Exercício 5

// Crie uma função chamada calculaMedia que recebe um array de números inteiros e o tamanho do array, e retorna a média dos elementos. Utilize a função no main() para calcular a média de um array de 10 números.


#include <stdio.h>
int calculaMedia(int lenArray, float array[]) {
    float media, soma = 0;
    int i;

    for (i = 0; i <= lenArray; i++){
        soma += array[i];
    }

    media = (float) soma/lenArray;

    return media;
}

int main(){
    float array[6] = {3.0, 4.3, 5.6, 2.8, 7.9, 3.4};
    float resultado = calculaMedia(6, array);

    printf("A media dos vetores e de %.2f\n", resultado);
}