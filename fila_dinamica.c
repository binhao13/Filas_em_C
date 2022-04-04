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
        }
        f->fim = ptr;

    }
}