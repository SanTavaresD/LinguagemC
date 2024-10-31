// Exercício 2

// Crie uma função chamada troca que recebe dois ponteiros para inteiros e troca os valores das variáveis apontadas. Teste a função no main() com dois números fornecidos pelo usuário.

#include <stdio.h>
void troca(int *ptrUm, int *ptrDois){
    *ptrUm = 20;
    *ptrDois = 30;
}
int main(){
    int numUm, numDois = 0;

    printf("Numero um: ");
    scanf("%d", &numUm);

    printf("Numero dois: ");
    scanf("%d", &numDois);
    
    troca(&numUm, &numDois);

    printf("O primeiro numero foi trocado para: %d\n", numUm);
    printf("O segundo numero foi trocado para: %d", numDois);

}