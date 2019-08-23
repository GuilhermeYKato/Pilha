#include "library.h"

void iniciaPilha(Stack *pilha){
    for (int i = 0; i < N ; i++){
        pilha->array[i] = NULL;
    }
    pilha->topo = -1;
}

bool estaVazia(Stack *pilha){
    return (pilha->topo == -1);
}

bool estaCheia(Stack *pilha){
    return (pilha->topo == N);
}

void push(Objeto item,Stack *pilha){
    pilha->array[pilha->topo + 1] = item.key;
}

void pop(Stack *pilha, Objeto *item){
     = pilha[pilha->topo - 1];
    pilha->topo -= 1;
}

int size(Stack *pilha){

}
Objeto top(Stack *pilha){

}
void print(Stack *pilha){
    
}


int main(){
int x=0;


    return 0;
}