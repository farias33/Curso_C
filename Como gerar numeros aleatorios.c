#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main() {

    //Responsavel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Variavel que recebe o resto da divisao do numero por 3(aleatorio entre 0 e 2)
    int aleatorio = rand() % 3;
    printf("%d",aleatorio2);
    //Variavel que recebe o resto da divisao do numero por 5(aleatorio entre 1 e 5, ou seja, entre 0 e 4  +1)
    int aleatorio2 = (rand() % 5) + 1;
    printf(\n"%d",aleatorio2);
}

