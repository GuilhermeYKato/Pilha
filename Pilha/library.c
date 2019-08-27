#include "library.h"

void iniciaPilha(Stack *pilha){
    for (int i = 0; i < N ; i++){
        pilha->array[i].key = NULL;
    }
    pilha->topo = 0;
}

bool estaVazia(Stack *pilha){
    if(pilha->topo == 0){
        return true;
    } else {
        return false;
    }
}

bool estaCheia(Stack *pilha){
    if(pilha->topo == N){
        return true;
    } else {
        return false;
    }
}

void push(Stack *pilha,Objeto item){
    if(pilha->topo < N){
        pilha->array[pilha->topo] = item;
        pilha->topo += 1;
        
    }
}

void pop(Stack *pilha){
    if(pilha->topo > 0){
        pilha->array[pilha->topo - 1].key = NULL;
        pilha->topo -= 1;
    }
}

int size(Stack *pilha){
    return pilha->topo;
}
Objeto top(Stack *pilha){
    if(pilha->topo > 0){
        return pilha->array[pilha->topo - 1];
    }
}
void print(Stack *pilha){
    printf("[");
    for(int i = 0; i < N; i++){
        if(pilha->array[i].key != 0)
            printf("%i ",pilha->array[i].key);
    }
    printf("]");
    printf("\n");
}

void check(Stack *pilha){
    if(estaVazia(pilha))
        printf("esta vazia\n");
    else
        printf("tem elementos\n");
    if(estaCheia(pilha))
        printf("esta cheia\n");
}


int main(){

    Stack pilha;
    Objeto objeto;


    iniciaPilha(&pilha);
    print(&pilha);
    check(&pilha);
    printf("tamanho: %i\n\n", size(&pilha));

    objeto.key =4;
    push(&pilha,objeto);
    objeto.key = 2;
    push(&pilha,objeto);
    print(&pilha);
    check(&pilha);
    printf("tamanho: %i\n", size(&pilha));

    pop(&pilha);
    print(&pilha);
    check(&pilha);
    printf("tamanho: %i\n\n", size(&pilha));

    push(&pilha, objeto);
    push(&pilha, objeto);
    push(&pilha, objeto);
    push(&pilha, objeto);
    objeto.key = 5;
    push(&pilha, objeto);
    print(&pilha);
    check(&pilha);
    printf("tamanho: %i\n", size(&pilha));
    printf("o objeto do topo tem key: %i\n\n", top(&pilha).key);

    pop(&pilha);
    pop(&pilha);
    pop(&pilha);
    pop(&pilha);
    pop(&pilha);
    pop(&pilha);
    print(&pilha);
    check(&pilha);
    printf("tamanho: %i", size(&pilha));
    


    return 0;
}