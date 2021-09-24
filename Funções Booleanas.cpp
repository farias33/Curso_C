#include <stdio.h>
#include <iostream>
#include<stdlib.h>
#include<stdbool.h>
#include <string>
using namespace std;

bool retornaBooleano(){
    return false; //Ou true

}

int main(){

    bool variavelBooleana;

    variavelBooleana = retornaBooleano();
    //Se for verdadeiro executa o primerio bloco
    if(variavelBooleana){
        printf("Eh verdadeiro");
     //Senão executa o segundo bloco   
    }else{
        printf("Eh falso");

    }

    printf("\n%d", variavelBooleana);


    return 0;
}