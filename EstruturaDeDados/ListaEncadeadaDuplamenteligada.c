/*
Lista Encadeada Duplamente Ligada (Double linked list)

Na lista duplamente ligada cada nó contém:
    - Dados
    - Ponteiro para o próximo nó (prox)
    - Ponteiro para o nó anterior (ant)


Operações Básicas:
1 - Inserir no início:
    - Atualiza o ponteiro ant do nó antigo para apontar para o novo nó
2 - Inserir no final:
    - Percorre até o final e atualiza os ponteiros adequadamente
3 - Remover um nó:
    - Atualiza os ponteiros do nó anterior e do próximo nó
*/

// Exemplo de implementação:

#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó
typedef struct No{
    int dado;
    struct No* prox; // Ponteiro para o próximo nó
    struct No* ant; // Ponteiro para o nó anterior
} No;

// Inserir no início
/*
Objetivo: Insere um novo nó no início da lista
Importante: Atualizar o ponteiro ant do nó antigo caso a lista não esteja vazia
*/
void inserirInicio(No** inicio, int valor) {
    No* novo = (No*) malloc (sizeof(No)); // Aloca memória para o nó novo
    novo -> dado = valor; // Insere o valor no novo nó
    novo -> prox = *inicio; // O próximo nó do novo é o atual do início
    novo -> ant = NULL; // O anterior do novo é NULL, pois será o primeiro nó

    if (*inicio != NULL) {
        (*inicio) -> ant = novo; // Atualiza o nó antigo para apontar para o novo como anterior
    }

    *inicio = novo; // O novo nó passa a ser o início da lista
}

// Mostar Lista
/*
Objetivo: Percorre toda a lista e imprime os valores.
Importante: Avançar para o próximo nó usando o ponteiro prox
*/
void mostrarLista(No* inicio) {
    No* atual = inicio; // Começa no início da lista
    while (atual != NULL) {
        printf("%d", atual -> dado); // Exibe o valor do nó atual
        atual = atual -> prox; // Move para o próximo nó 
    }
    printf("\n");
}

// Remover um Nó
/*
Objetivo: Remove o nó com o valor específicado
Importante: Atualizar os ponteiros do nó anterior e próximo para manter a integridade da lista.
*/
void removerNo (No** inicio, int valor){
    No* atual = *inicio; // Começa no início da lista

    // Percorre a lista até encontrar o nó com o valor desejado
    while (atual != NULL && atual -> dado != valor) {
        atual = atual -> prox;
    }

    if (atual == NULL) { // Nó não encontrado
        printf("Valor %d nao encontrado!\n", valor);
        return;
    }

    if (atual -> ant != NULL) {
        atual -> ant -> prox = atual -> prox; // Ajusta próximo nó anterior
    } else { 
        *inicio = atual -> prox; // Atualiza o início caso seja o primeiro nó
    }

    if (atual -> prox != NULL) {
        atual -> prox -> ant = atual -> ant; // Ajusta o anterior do próximo nó
    }

    free(atual); // Libera memória do nó
    printf("Valor %d removido!\n", valor);
}

int main() {
    No* inicio = NULL;

    inserirInicio(&inicio, 10);
    inserirInicio(&inicio, 20);
    inserirInicio(&inicio, 30);

    printf("Lista: ");
    mostrarLista(inicio);

    removerNo(&inicio, 20);
    printf("Lista apos remocao: ");
    mostrarLista(inicio);

    return 0;
}
