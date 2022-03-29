int desenfileira(t_fila *f){
    int dado,i;
    if(f->fim == 0){
        printf("fila vazia \n");
        return;
    }else{
        dado = f->dados[0];
        for(i = 0;i < f->fim;i++){
            f->dados[i] = f->dados[i+1];
        }
        f->fim--;
        return dado;
    }

}


