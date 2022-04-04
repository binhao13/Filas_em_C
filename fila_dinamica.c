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