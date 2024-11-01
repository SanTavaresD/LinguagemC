// Vamos começar com uma aplicação prática de listas encadeadas, algo comum em sistemas que precisam gerenciar filas, listas dinâmicas ou caches.

/*
Exemplo prático: Sistema de espera em uma clínica médica

Imagina que você precisa implementar uma lista de espera dinâmica onde novos pacientes são adicionados ao final da fila e atendidos na ordem de chegada (primeiro a entrar, primeiro a sair).
*/

// Aqui está o código para implementar essa lista de espera usando uma lsita encadeada:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura do paciente (nó da lista encadeada)
typedef struct Paciente{
    char nome[50]; // Um array de caracteres (string) para armazenar o nome do paciente.
    int idade; // Um campo inteiro para armazenar a idade do paciente.
    struct Paciente* prox; //Um ponteiro que aponta para o próximo paciente na lista (ou seja, o próximo nó na lista encadeada).
} Paciente;

// Função para criar um novo paciente
Paciente* criarPaciente(char nome[], int idade) {
    // 1. Alocar memória para um novo nó (novo paciente)
    Paciente* novoPaciente = (Paciente*) malloc (sizeof(Paciente));

    // 2. Coloca as informações do paciente
    strcpy(novoPaciente -> nome, nome);
    novoPaciente -> idade = idade;

    // 3. Fazer o 'proximo' no novo paciente apontar para o antigo primeiro paciente 
    novoPaciente -> prox = NULL;
    return novoPaciente;
}

// Função para adicionar um paciente no fim da fila
void adicionarPaciente(Paciente** inicio, char nome[], int idade) {
    Paciente* novoPaciente = criarPaciente(nome, idade);
    if (*inicio == NULL){
        *inicio = novoPaciente;
    } else {
        Paciente* temp = *inicio;
        while (temp -> prox != NULL) {
            temp = temp -> prox;
        }
        temp -> prox = novoPaciente;
    }
}

// Função para atender (remover) o primeiro paciente da fila
void atenderPaciente(Paciente** inicio) {
    if (*inicio == NULL){
        printf("Nenhum paciente na fila.\n");
    } else {
        Paciente* temp = *inicio;
        *inicio = (*inicio) -> prox;
        printf("Atendendo paciente: %s, Idade:%d\n", temp -> nome, temp -> idade);
        free(temp);
    }
}

// Função para exibir a lista de pacientes na fila
void mostrarFila(Paciente* inicio){
    if (inicio == NULL){
        printf("Nenhum paciente na fila.\n");
    } else {
        Paciente* temp = inicio;
        while (temp != NULL) {
            printf("Paciente: %s, Idade: %d\n", temp -> nome, temp -> idade);
            temp = temp -> prox;
        }
    }
}

int main() {
    Paciente* inicio = NULL;
    int opcao;
    char nome[50];
    int idade;

    do {
        printf("\n1. Adicionar\n2. Atender Paciente\n3. Mostrar Fila\n0. Sair\n");
        printf("Escola uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Nome do Paciente: ");
                scanf("%s", nome);
                printf("Idade do Paciente: ");
                scanf("%d", &idade);
                adicionarPaciente(&inicio, nome, idade);
                break;
            case 2: 
                atenderPaciente(&inicio);
                break;
            case 3:
                mostrarFila(inicio);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");

        }
    } while (opcao != 0);

    return 0;
}