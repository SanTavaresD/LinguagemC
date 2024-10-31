// Exercício 1

// Declare uma variável inteira e um ponteiro para inteiro. Use o ponteiro para alterar o valor da variável e exiba o valor antes e depois da alteração.

#include <stdio.h>
void alterarValor(int *ptr) {
    *ptr = 20;
}
int main(){
    int num = 2;

    printf("Antes: %d\n", num);

    alterarValor(&num);
   
    printf("Depois: %d\n", num);

    return 0;
}