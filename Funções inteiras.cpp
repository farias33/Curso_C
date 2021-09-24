#include <stdio.h>
#include <iostream>
#include<stdlib.h>
#include<stdbool.h>
#include <string>
using namespace std;
int retorna10(){
    printf("\ntestetstete");
    return 10;
}


int main(){

    int a;
    //Passando o retorno de uma função para uma variável
    a = retorna10();

    printf("\n%d", a);

    


    return 0;
}