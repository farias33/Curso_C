#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void main() {
    int a = 10;

    //Conectivos logico E(AND)(&&), Se uma comparacao for falsa, nao entra no bloco(basta uma ser falsa para o conjunto ser falso)
    if(a>5 && a<15){
        printf("\nA variavel A esta entre 5 e 15");
    }

    //Conectivos logico OU (OR)(||), Se uma comparacao for verdadeira, ja entra no bloco,(Basta uma ser verdadeira para o conjunto ser verdadeira)
     if(a>5 || a<15){
        printf("\nA variavel A eh maior que 5 ou menor que 15");
    }

    //Misturando conectivos
     if((a>5 && a<15)||a == 20){
        printf("\nA variavel A esta entre 5 e 15 ou ela vale 20");
    }


}
