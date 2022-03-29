void imprimefila(t_fila *f){
    int i;
    printf("Fila: \n");
    for(i = 0;i < f->fim;i++){
        printf("%d ",f->dados[i]);
    }
    printf("\n");
}
