#define n 3

typedef struct t_fila{
    int dados[n];
    int fim;
}t_fila;

void inicializarfila(t_fila *f){
    int i;
    for(i = 0; i < n;i++){
        f->dados[i] = 0;
    }
    f->fim = 0;
}

void enfileira(int dado,t_fila *f){
    if(f->fim == n){
        printf("fila cheia \n");
        return;
    }else{
        f->dados[f->fim] = dado;
        f->fim++;
    }
}