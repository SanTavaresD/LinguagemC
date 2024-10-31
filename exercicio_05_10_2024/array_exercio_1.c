// Exercício 1

// Declare um array de 5 inteiros e inicialize-o com valores fornecidos pelo usuário. Exiba todos os elementos usando um laço for.

#include <stdio.h>
float calculaMedia(int lenArray, float array[]){
    float media, soma = 0;
    int i;

    for (i = 0; i < lenArray; i++){
        soma += array[i];
    }

    media = (float) soma / lenArray;

    return media;
}

int main(){
    float array[5] = {};
    float resultado ;

    for (int i = 0; i < 5; i++){
        printf("Insira um elemento no array: ");
        scanf("%f", &array[i]);
    }

    for (int a = 0; a < 5; a++){
        printf("Elemento %d: %2.f\n", a, array[a]);
    }

    resultado = calculaMedia(5, array);

    printf("Media do array: %2.f", resultado);

    return 0;
    
}