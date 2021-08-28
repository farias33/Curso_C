#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void main() {

    //Definindo variaveis
    int a = 5;
    char b = 'x';
    //Codigo de exemplo com if
    if(a == 1){
        printf("\nOpcao escolhida foi a 1");
    }else if(a == 2){
        printf("\nOpcao escolhida foi a 2");
    }else if(a == 3){
        printf("\nOpcao escolhida foi a 3");
    }else{
        printf("\nOpcao invalida");
    }


    //Mesmo codigo de cima adaptado para switch
    switch (a)
    {
    case 1:
        printf("\nOpcao escolhida foi a 1");
    case 2:
        printf("\nOpcao escolhida foi a 2");
    case 3:
        printf("\nOpcao escolhida foi a 3");
        break;
    
    default:
    printf("\nOpcao invalida");
        break;
    }


    //Switch com char
    switch (b)
    {
    case 'x':
        printf("\nA letra eh x");
        break; 
    
    default:
    printf("\nOpcao invalida");
        break;
    }


}


