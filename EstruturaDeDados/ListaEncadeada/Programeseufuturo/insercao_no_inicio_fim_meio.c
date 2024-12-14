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

// Procedimento para inserir no inicio
void inserir_no_inicio(No **lista, int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo -> valor = num;
        novo -> proximo = *lista;
        *lista = novo;
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }
}

// Procedimento para inserir no fim
void inserir_no_fim(No **lista, int num) {
    No *aux, *novo = malloc(sizeof(No));

    if(novo) {
        novo -> valor = num;
        novo -> proximo = NULL;

        // é o primeiro?
        if(*lista == NULL){
            *lista = novo;
        }
        else{
            aux = *lista;
            while(aux -> proximo){
                aux = aux -> proximo;
            }
            aux -> proximo = novo;
        }
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }
}

// Procedimento para inserir no meio
void inserir_no_meio(No **lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo -> valor = num;
        // É o primeiro
        if(*lista == NULL){
            novo -> proximo = NULL;
            *lista = novo;
        }
        else{
            aux = *lista;
            while(aux -> valor != ant && aux -> proximo){
                aux = aux -> proximo;
            }
            novo -> proximo = aux -> proximo;
            aux -> proximo = novo;
        }
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }
}

void imprimir (No *no){
    printf("\n\tLista: ");
    while(no){
        printf("%d ", no->valor);
        no = no -> proximo;
    }
}

int main(){

    int opcao, valor, anterior;
    No *lista = NULL;

    do{
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 - InserirM\n\t4 - Imprimir\n\t");
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