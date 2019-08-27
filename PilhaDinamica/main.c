#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int chave;
} Objeto;

typedef struct NoPilha *PtrNoPilha;

typedef struct NoPilha{
    Objeto obj;
    PtrNoPilha proximo;
} NoPilha;

typedef struct {
    PtrNoPilha topo;
    int tamanho;
} PilhaDinamica;

void iniciaPilha(PilhaDinamica *p){
    p->topo = NULL;
    p->tamanho = 0;
}
bool estaVazia(PilhaDinamica *p){
    if(p->topo == NULL){
        return true;
    } else {
        return false;
    }
}
void empilha(Objeto obj, PilhaDinamica *p){
    PtrNoPilha aux;
    aux = (PtrNoPilha) malloc (sizeof(NoPilha));

    aux->obj = obj;
    aux->proximo = p->topo;
    p->topo = aux;
    p->tamanho += 1;
}
void desempilha(PilhaDinamica *p, Objeto *obj){
    if(estaVazia(p)){
        printf("Erro: Pilha vazia \n\n");
    } else {
        *obj = p->topo->obj;
        PtrNoPilha aux;
        aux = p->topo;
        p->topo = p->topo->proximo;
        free(aux);
        p->tamanho -= 1;
    }
}
int tamanhoPilha(PilhaDinamica *p){
    printf("Tamanho: %d\n", p->tamanho);
}
void topo(PilhaDinamica *p, Objeto *obj){
    printf("Topo: %d\n", p->topo->obj.chave);
}
void imprimePilha(PilhaDinamica *p){
    printf("{");
    PtrNoPilha ptr;
    for(ptr = p->topo; ptr !=NULL ;ptr = p->topo->proximo){
        printf("%d ", p->tamanho);
    }
    printf("}");

}

int main() {
    PilhaDinamica p;
    Objeto o;
    iniciaPilha(&p);
    /*
    for(int i = 0; i < 10; i++){
        o.chave = i;
        empilha(o,&p);
        imprimePilha(&p);
        tamanhoPilha(&p);
        topo(&p,&o);
        printf("\n\n");

    }

*/

    o.chave = 1;
    empilha(o,&p);
    imprimePilha(&p);

    o.chave = 2;
    empilha(o,&p);
    imprimePilha(&p);



    return 0;
}