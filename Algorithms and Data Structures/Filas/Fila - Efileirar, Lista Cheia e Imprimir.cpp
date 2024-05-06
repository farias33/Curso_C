#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
//FIFO(First In First Out)O primeiro a entrar é o primeiro a sair

void imprime_vetor(int vetor[TAM], int tamanho){
    printf("\n");
     
    for(int i = 0; i < TAM; i++){
        printf("%d - ",vetor[i]);
    }
} 


void fila_construtor(int *frente, int *tras){
    *frente = 0;
    *tras = -1;
}

//Processo de enfileirar, colocar coisas novas na nossa fila
void fila_enfileirar(int fila[TAM], int valor, int *tras){
    if(*tras == TAM - 1){
        printf("FIla cheia");
    }else{
        *tras += 1;
    fila[*tras] = valor;
    }
}

int fila_tamanho(int tras, int frente){
    return (tras - frente) + 1;
}


int main(){
    int frente, tras;
    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int valor;

    fila_construtor(&frente, &tras);

    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 7, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 7, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 7, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 7, &tras);
    fila_enfileirar(fila, 8, &tras);

    imprime_vetor(fila, fila_tamanho(tras, frente));

}