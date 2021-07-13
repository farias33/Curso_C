#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void main() {

    //Definindo variaveis
    bool a = true, b = false;


    //Se a for verdadeiro
    if(a){    //Eu nao preciso fazer == a true, pois ele esta implicatamente fazendo isso ja
        printf("A eh verdadeiro");
    }
    // Se B for falso
    if(b){
        printf("\nA eh verdadeiro");
    }else{
        printf("\nB eh falso");
    }

    // Comparando uma falsidade
    if(!b){ //O sinal de exclamacao eh uma inversao
        printf("\nB eh falso");
    }

}
