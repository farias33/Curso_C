#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int primeiroValor, int segundoValor){

    printf("A soma entr %d e %d eh: %d",primeiroValor, segundoValor, primeiroValor + segundoValor);
}
int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;

int main();{
    //Definindo variáveis
    int a = 5, b = 7;

    //Função que mostra a soma
    mostraSoma(a, b); //Não precisa passar sempre variáveis, posso também passar valores

    printf("\nA soma entr %d e %d eh: %d",primeiroValor, segundoValor, retornaSoma(a, b));

    return 0;
}