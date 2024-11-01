// O que é uma lista Encadeada?

/* Uma lista encadeada é uma estrutura de dados que consiste em uma sequência de elementos, chamados NÓS. Cada nó contém dois campos:
    
    1 - DADO: O valor armazenado.
    2 - PONTEIRO: Aponta para o próximo nó da lista.

A vantagem de uma lista encadeada sobre arrays é que ela permite inserções e remoções mais eficientes, já que não há necessidade de realocação de memória.
*/

// Estrutura de um nó
struct Node {
    int data;           // Valor armazenado no nó 
    struct Node* next;  // Ponteiro para o próximo nó da lista
};

/*
Operações Básicas:
    1 - Inserir no início.
    2 - Inserir no final.
    3 - Remover um elemento.
    4 - Buscar um elemento.
    5 - Exibir todos os elementos da lista

Vamos implementar essas operações uma por uma.
*/

// Exemplo básico de inserção no início e exibição:
#include <stdio.h>
#include <stdlib.h>

// Estrutura de um nó
// (já foi passado na linha 12)

// Função para criar um novo nó
struct Node* criarNo(int valor) {
    struct Node* novoNo = (struct Node*) malloc (sizeof(struct Node)); // Aloca memória para o novo nó
    novoNo -> data = valor; //valor;                                       // Atribui o valor ao campo 'data' do novo nó
    novoNo -> next = NULL;                                             // O ponteiro 'next' do novo nó aponta para o antigo primeiro nó 
    return novoNo; 
}



// Função para inserir no início
void inserirInicio(struct Node** head_ref, int novoValor){
    struct Node* novoNo = criarNo(novoValor);
    novoNo -> next = *head_ref; // O próximo nó será o nó atual
    *head_ref = novoNo;         // Atualizar a cabeça para o novo nó
}
/*
    1 - void
        Na primeira linha o "void" é para dizer que a função não retorna nenhum valor;
    
    2 - struct Node** head_ref
        O "struct Node**" é o tipo de dado do parâmetro head_ref, que é um ponteiro duplo (um ponteiro para um ponteiro) que aponta para o cabeçalho (head) da lista encadeada.
        A função precisa modificar o ponteiro de cabeçalho da lista (porque vamos inserir um novo nó no início). Se usássemos apenas um ponteiro simples (Node* head), não seríamos capazes de modificar o ponteiro original fora da função. Usamos um ponteiro para o ponteiro para poder atualizar o valor head diretamente dentro da função 

    3 - int novoValor
        Esse parâmetro recebe o valor (um número inteiro) que será armazenado no novo nó que vamos inserir no início da lista
*/


// Função para exibir os elementos da lista
void exibirLista(struct Node* no) {
    while (no != NULL) {
        printf("%d -> ", no -> data);
        no = no -> next;
    }
    printf("NULL\n");
}


int main() {
    struct Node* head = NULL;

    // Inserindo elementos na lista
    inserirInicio(&head, 10);
    inserirInicio(&head, 20);
    inserirInicio(&head, 30);


    // Exibir a lista
    printf("Lista encadeada: ");
    exibirLista(head);

    return 0;
}