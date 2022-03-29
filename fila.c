#include <stdlib.h>
#include <stdio.h>
#include "enfileira.h"
#include "desenfileira.h"
#include "imprime_fila.h"
int main(){
    t_fila f1;

    inicializarfila(&f1);
    
    enfileira(10,&f1);
    enfileira(20,&f1);
    enfileira(30,&f1);

    imprimefila(&f1);

    desenfileira(&f1);

    imprimefila(&f1);
}