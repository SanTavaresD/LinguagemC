// Lista de Exercícios (10 questões)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura 1 
typedef struct statusJogador {
    char nome[50];
    int camisa;
    char cartao[15];
    int time;
    struct statusJogador* prox;
} statusJogador;

// Estrutura 2
typedef struct buscaJogadors{
    char nome[50];
    int camisa;
    char cartao[15];
    int time;
    struct buscaJogadors* prox ;
} buscaJogadors;


//1 - Inserção em Lista Encadeada: Implemente uma função para inserir um elemento no início da lista encadeada.
statusJogador* criarJogador(char nome[50], int camisa, char cartao[], int time){
    statusJogador* novoJogador = (statusJogador*) malloc (sizeof(statusJogador));

    strcpy(novoJogador -> nome, nome);
    strcpy(novoJogador -> cartao, cartao);
    novoJogador -> time = time;
    novoJogador -> camisa = camisa;

    novoJogador -> prox = NULL;

    return novoJogador;
} 

void inserirJogador(statusJogador** inicio, char nome[], int camisa, char cartao[], int time) {
    statusJogador* novoJogador = criarJogador(nome, camisa, cartao, time);
    novoJogador -> prox = *inicio;
    *inicio = novoJogador;
}


// 2 - Remoção de Elementos: Implemente uma função que remova um nó específico da lista, dado seu valor
void removeJogadorPunido(statusJogador** inicio){
    if (*inicio == NULL){
        printf("Sem jogador em campo!");
    } else {
        statusJogador* temp = *inicio;
        while (inicio != NULL){
            if (strcmp(temp -> cartao, "Vermelho") == 0){
                printf("Expulso o jogador %s do time %d camisa %d", temp -> nome, temp -> time, temp -> camisa);
                free(temp);
                temp = temp -> prox;
            }
            
        }
    }
}

void removeJogador(statusJogador** inicio){
    if(*inicio == NULL){
        printf("Sem jogador em campo!");
    } else {
        statusJogador* temp = *inicio;
        while (inicio != NULL){
            free(temp);
            temp = temp -> prox;
        }
    }
}


// 3 - Tamanho da Lista: Crie uma função que conte o número de nós em uma lista encadeada.
int jogadoresEmCampo(statusJogador** inicio){
    int contador = 0;
    if (inicio == NULL){
        printf("Sem jogadoes em campo!");
    } else {
        statusJogador* temp = *inicio;
        while (temp != NULL){
            contador++;
            temp = temp -> prox;
        }
    }
    return contador;
}

// 4 - Busca em Lista Encadeada: Implemente uma função que retorne se um valor está presente na lista encadeada.
void buscaJogador(statusJogador* inicio, char nome[50], int camisa, int time){
    buscaJogadors* busca = (buscaJogadors*) malloc (sizeof(buscaJogadors));

    if (inicio == NULL){
        printf("Sem jogadores em campo!");
    } else {
        statusJogador* temp = inicio;
        while (temp != NULL){

            if (strcmp(temp -> nome, nome) == 0 && temp -> camisa == camisa && temp -> time == time){
                printf("Jogador Encontrado!\nNome: %s\nCamisa: %d\nTime: %d\nCartao atual: %s", temp -> nome, temp -> camisa, temp -> time, temp -> cartao); 

                strcpy(busca -> nome, temp -> nome);
                busca -> camisa = temp -> camisa;
                strcpy(busca -> cartao, temp -> cartao);
                busca -> time = temp -> time;
                temp = temp -> prox;

            break;
            } 
            
        }
    }
}

// 5 - Substituir em Lista Encadeada: Implemente uma função que substitua um valor na lista encadeada 
void substiuirJogador(statusJogador** inicio, char nomeSair[50], int camisaSair, int timeSair, char nomeEntra[50], int camisaEntra, int timeEntra, char cartaoEntra[50]) {
    if (inicio == NULL){
        printf("Sem jogadores em campo!\n");
    } else {
    
        if (timeSair == timeEntra){
            printf("\nSubstituicao no time %d\n", timeEntra);
            
            statusJogador* temp = *inicio;

            while (*inicio != NULL){
                if(strcmp(temp -> nome, nomeSair) == 0 && temp -> camisa == camisaSair){
                    printf("Saindo o jogador %s camisa %d", nomeSair, camisaSair);
                    free(temp);
                    temp = temp -> prox;
                }
                
            }
            printf("\nEntrando o jogador %s camisa %d", nomeEntra ,camisaEntra);
            inserirJogador(inicio, nomeEntra, camisaEntra, cartaoEntra, timeEntra);
        
        }
    }
}

void mostrarCampo(statusJogador* inicio) {
    if (inicio == NULL){
        printf("Sem jogadores em campo!\n");
    } else {
        statusJogador* temp = inicio;
        while (temp != NULL) {
            printf("Jogador: %s, Time: %d, Camisa: %d, Cartao: %s\n", temp -> nome, temp -> time, temp -> camisa, temp -> cartao);
            temp = temp -> prox;
        }
    }
}

int main () {
    statusJogador* inicio = NULL;
    int opcao, time, camisa, timePesquisa, camisaPesquisa, camisaSair, timeSubs, camisaEntra;
    char nome[50], cartao[15], nomePesquisa[50], nomeSair[50], nomeEntra[50], cartaoSair[50], cartaoEntra[50];

    do {
        printf("\n1. Inserir jogador\n2. Remover jogador com cartao vermelho\n3. Quantidade de jogadores em Campo\n4. Buscar jogador\n5. Substituicao\n6. Mostrar todos os jogadores em campo\n0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Nome do jogador: ");
                scanf("%s", nome);
                printf("Time do jogador (1 ou 2): ");
                scanf("%d", &time);
                printf("Camisa do jogador: ");
                scanf("%d", &camisa);
                printf("Cor do cartao: ");
                scanf("%s", cartao);
                inserirJogador(&inicio, nome, camisa, cartao, time);
                break;
            case 2:
                removeJogadorPunido(&inicio);
                break;
            case 3:
                printf("Numeros de jogadores em campo: %d", jogadoresEmCampo(&inicio));
                break;
            case 4:
                printf("Jogador a ser pesquisado: ");
                scanf("%s", nomePesquisa);
                printf("Camisa do Jogador a ser pesquisado: ");
                scanf("%d", &camisaPesquisa);
                printf("Time do jogador a ser pesquisado: ");
                scanf("%d", &timePesquisa);
                buscaJogador(inicio, nomePesquisa, camisaPesquisa, timePesquisa);
                //buscaJogadors* pesquisa = NULL;
                break;
            case 5:
                printf("Time: ");
                scanf("%d", &timeSubs);
                printf("Jogador a sair: ");
                scanf("%s", nomeSair);
                printf("Camisa do jogador a sair: ");
                scanf("%d", &camisaSair);
                printf("Cartao do jogador a sair: ");
                scanf("%s", cartaoSair);
                printf("Jogador a entrar: ");
                scanf("%s", nomeEntra);
                printf("Camisa do jogador a entrar: ");
                scanf("%d", &camisaEntra);
                printf("Cartao do jogador a entrar: ");
                scanf("%s", cartaoEntra);

                substiuirJogador(&inicio, nomeSair, camisaSair, timeSubs, nomeEntra, camisaEntra, timeSubs, cartaoEntra);
                break;
            case 6:
                mostrarCampo(inicio);
                break;
            case 0:
                printf("Saindo do app...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}