#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 5

typedef struct {
    char nome[30];
    int idade;
} Pessoa;

typedef struct {
    Pessoa pessoas[MAX];
    int topo;
    int base;
    int limite;
} Pilha;

void Reset(Pilha *p) {
    p->topo = 0;
    p->base = 0;
    p->limite = MAX;
}

bool Empty(Pilha *p) {
    return p->topo == 0;
}

bool Full(Pilha *p) {
    return p->topo == MAX;
}

bool PUSH(Pilha *p, Pessoa *item) {
    if (!Full(p)) {
        p->pessoas[p->topo] = *item;
        p->topo++;
        return true;
    }
    return false;
}

void POP(Pilha *p, Pessoa *item) {
    if (Empty(p)) return;
    p->topo--;
    *item = p->pessoas[p->topo];
}

// TODO 1: Implemente a função Clear (deve zerar o topo da pilha)
void CLEAR(Pilha *p) {

    if(!Empty(p)){
         p->topo--;
    }

   

    // Escreva seu código aqui
}

// TODO 2: Implemente a função Listar desempilhando e mostrando na tela
void Listar(Pilha *p) {
    printf("\n--- Conteúdo da Pilha ---\n");
    // Dica do slide: use um 'while (!Empty(p))' fazendo POP de cada item
    // Escreva seu código aqui
}