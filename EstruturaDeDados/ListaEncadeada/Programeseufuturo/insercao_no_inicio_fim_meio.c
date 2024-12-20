#include <stdio.h>
#include <stdlib.h>

/*
        Lista Simplismente Encadeada
        Como inserir no inicio da lista?
*/

typedef struct no {
    int valor;
    struct no *proximo;
}No;

typedef struct {
    No *inicio;
    int tam;
 } Lista;

 void criar_lista(Lista *lista){
    lista -> inicio = NULL;
    lista -> tam = 0;
 }

// Procedimento para inserir no inicio
void inserir_no_inicio(Lista *lista, int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo -> valor = num;
        novo -> proximo = lista -> inicio;
        lista -> inicio = novo;
        lista -> tam++;
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }
}

// Procedimento para inserir no fim
void inserir_no_fim(Lista *lista, int num) {
    No *aux, *novo = malloc(sizeof(No));

    if(novo) {
        novo -> valor = num;
        novo -> proximo = NULL;

        // é o primeiro?
        if(lista -> inicio == NULL){
            lista -> inicio = novo;
        }
        else{
            aux = lista -> inicio;
            while(aux -> proximo){
                aux = aux -> proximo;
            }
            aux -> proximo = novo;
        }
        lista -> tam++;
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }
}

// Procedimento para inserir no meio
void inserir_no_meio(Lista *lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo -> valor = num;
        // É o primeiro
        if(lista -> inicio == NULL){
            novo -> proximo = NULL;
            lista -> inicio = novo;
        }
        else{
            aux = lista -> inicio;
            while(aux -> valor != ant && aux -> proximo){
                aux = aux -> proximo;
            }
            novo -> proximo = aux -> proximo;
            aux -> proximo = novo;
        }
        lista -> tam++;
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }
}

void inserir_ordenado(Lista *lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if (novo) {
        novo -> valor = num;
        // A lista está vazia?
        if(lista -> inicio == NULL){
            novo -> proximo = NULL;
            lista -> inicio = novo;
        } // É o menor
        else if(novo -> valor < lista -> inicio){
            novo -> proximo = lista -> inicio;
            lista -> inicio = novo;
        }
        else {
            aux = lista -> inicio;
            while(aux -> proximo && novo -> valor > aux -> proximo -> valor){
                aux = aux -> proximo;
            }
            novo -> proximo = aux -> proximo;
            aux -> proximo = novo;
        }
    }
    else {
        printf("Erro ao alocar memoria");
    }
}

void imprimir (Lista lista){
    No *no = lista.inicio;
    printf("\n\tLista tam %d: ", lista.tam);
    while(no){
        printf("%d ", no->valor);
        no = no -> proximo;
    }
}

int main(){

    int opcao, valor, anterior;
    //No *lista = NULL;
    Lista lista;

    criar_lista(&lista);

    do{
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 - InserirM\n\t4 - InserirO\n\t5 - Imprimir\n\t");
        scanf("%d", &opcao);
        
        switch(opcao){
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista, valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_fim(&lista, valor);
            break;
        case 3:
            printf("Digite um valor e o valor de referencia: ");
            scanf("%d%d", &valor, &anterior);
            inserir_no_meio(&lista, valor, anterior);
            break;
        case 4:
            printf("Digite um valor e o valor de referencia: ");
            scanf("%d%d", &valor, &anterior);
            inserir_ordenado(&lista, valor);           
            break;
        case 5:
            imprimir(lista);
            break;
        default:
            if(opcao != 0){
                printf("Opcao invalida!\n");
            }
        }

    }while(opcao != 0);


    return 0;
}