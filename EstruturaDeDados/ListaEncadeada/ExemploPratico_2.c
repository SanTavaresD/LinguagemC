/* 
Vamos criar um exemplo prático de uma Lista Encadeada Duplamente Ligada que gerencia um catálogo de livros. Cada Livro tem:
    - Título 
    - Autor
    - Ano de publicação
As operações básicas serão:
    1 - Inserir um livro no início
    2 - Inserir um livro no final
    3 - Remover um livro pelo título
    4 - Exibir a lista de livros em ordem reversa
*/

// Segue o código completo com explicações

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para criar um novo nó
typedef struct Livro {
    char titulo[50];
    char autor[50];
    int ano;
    struct Livro* prox;
    struct Livro* ant;
} Livro;

// Função para criar um novo nó
Livro* criarLivro(char titulo[], char autor[], int ano) {
    Livro* novo = (Livro*) malloc (sizeof(Livro));
    strcpy(novo -> titulo, titulo);
    strcpy(novo -> autor, autor);
    novo -> ano = ano;
    novo -> prox = NULL;
    novo -> ant = NULL;
    return novo;
}

// 1 - Inserir um livro no início
void inserirInicio(Livro** inicio, Livro** fim, char titulo[], char autor[], int ano) {
    Livro* novo = criarLivro(titulo, autor, ano);
    if (*inicio == NULL) { // Lista está vazia
        *inicio = novo;
        *fim = novo;
    } else {
        novo -> prox = *inicio;
        (*inicio) -> ant = novo;
        *inicio = novo;
    }
}

// 2 - Inserir um livro no final
void inserirFim(Livro** inicio, Livro** fim, char titulo[], char autor[], int ano) {
    Livro* novo = criarLivro(titulo, autor, ano);
    if (*fim == NULL){ // Lista está vazia
        *inicio = novo;
        *fim = novo;
    } else {
        novo -> ant = *fim;
        (*fim) -> prox = novo;
        *fim = novo;
    }
}

// 3 - Remover um livro
Livro* remover(Livro **lista, char titulo) {
    Livro *aux, *remover = NULL;

   if(*lista){
        if ((*lista) -> titulo == titulo){
            remover = *lista;
            *lista = remover -> prox;
        }
        else {
            aux = *lista;
            while(aux -> prox && aux -> prox -> titulo != titulo)
                aux = aux -> prox;
            
            if(aux -> prox){
                remover = aux -> prox;
                aux -> prox = remover -> prox;
            }
        }
   }

    return remover;
}


int main (){

    int opcao, ano;
    char titulo, autor;

    Livro *lista = NULL;

    do {
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 - InserirM\n\t4 - InserirO\n\t5 - Remover\n\t6 - Imprimir\n");
        scanf("%d", &opcao);

        switich(opcao){
            case 2:
                printf("Digite um livro: ");
                scanf("%d", &)

            case 5:
                printf("Digite um título de um livro a ser removido: ");
                scanf("%s", &titulo);
                break;

        }
    }
}
