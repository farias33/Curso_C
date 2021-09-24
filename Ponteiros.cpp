#include <stdio.h>
#include <iostream>
#include<stdlib.h>
#include<stdbool.h>
#include <string>
using namespace std;

int main(){
    //Variável
    int a = 20;
    
    //Imprimir o valor de um variável
    printf("\nA = %d", a);

    //Imprimindo o endereço de a
    printf("\nEndereço de A = %d", &a);
    //VÁRIAVEIS ARMAZENAM VALORES
    int b = 10;
    //PONTEIROS ARMAZENAM POSIÇÕES DA MEMÓRIA
    int *ponteiro;
    //Ponteiro recebendo a posição na memória da variável b
    ponteiro = &b;
    //Imprimir o valor de um variável
    printf("\nB = %d", b);
    //* pode ser lido como "Conteudo apontado por"
    *ponteiro = 40;
    
    printf("\nB = %d", b);
    //Lendo o valor de uma varável
    scanf("%d",&a);









    return 0;
}