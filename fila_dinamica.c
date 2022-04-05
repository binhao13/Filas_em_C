#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct NO{
    int dado;
    struct NO *prox;
}NO;

typedef struct FILA{
    NO *ini;
    NO *fim;
}FILA;

void enfileira(int dado,FILA *f){
    NO *ptr = (NO*)malloc(sizeof(NO));
    if(ptr == NULL){
        printf("Erro de alocação \n");
        return;
    }else{
        ptr->dado = dado;
        ptr->prox = NULL;
        if(f->ini == NULL){
            f->ini = ptr;
        }else{
        f->fim->prox = ptr;
         }
        f->fim = ptr;
        return;
    }
}

int desenfileira (FILA *f){
    NO *ptr = f->ini;
    int dado;
    if(ptr != NULL){
        f->ini = ptr->prox;
    }else{
        printf("Fila vazia \n");
        return;
    }
}

void imprimefila(FILA *f){
    NO *ptr = f->ini;
    if(ptr != NULL){
        while(ptr != NULL){
            printf("%d ",ptr->dado);
            ptr = ptr->prox;
        }
        printf("\n");
    }else{
        printf("fila vazia\n");
        return;

    }
}

int main(){
    FILA *f1 = (FILA*)malloc(sizeof(FILA));
    if(f1 == NULL){
        printf("erro de alocaçao \n");
        exit(-1);
    }else{
        enfileira(10,f1);
        enfileira(20,f1);
        enfileira(30,f1);
        imprimefila(f1);

    }
}