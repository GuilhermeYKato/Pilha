#ifndef PILHA_LIBRARY_H
#define PILHA_LIBRARY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 100

typedef struct{
    int key;
}Objeto;

typedef struct{
    Objeto array[N];
    int topo;
}Stack;

void iniciaPilha(Stack *pilha);
bool estaVazia(Stack *pilha);
bool estaCheia(Stack *pilha);
void push(Stack *pilha,Objeto obj);
void pop(Stack *pilha);
int size(Stack *pilha);
Objeto top(Stack *pilha);
void print(Stack *pilha);
void check(Stack *pilha);
#endif //PILHA_LIBRARY_H