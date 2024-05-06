#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
//FIFO(First In First Out)O primeiro a entrar é o primeiro a sair

void imprime_vetor(int vetor[TAM]){
    printf("\n");
     
    for(int i = 0; i < TAM; i++){
        printf("%d - ",vetor[i]);
    }
} 


void fila_construtor(int *frente, int *tras){
    *frente = 0;
    *tras = -1;
}
//Verifica se a fila esta vazia
bool fila_vazia(int frente, int tras){
    if(frente > tras){
        return true;
    }else{
        return false;
    }
}
//Verifica se a fila esta cheia
bool fila_cheia(int tras){
    if(tras == TAM - 1){
        return true;
    }else{
        return false;
    }
}

//Processo de enfileirar, colocar coisas novas na nossa fila
void fila_enfileirar(int fila[TAM], int valor, int *tras){
    if(fila_cheia(*tras)){
        printf("Fila cheia");
    }else{
        *tras += 1;
    fila[*tras] = valor;
    }
}

void fila_desenfileirar(int fila[TAM], int *frente, int tras){
    if(fila_vazia(*frente, tras)){
        printf("Impossivel desenfileirar uma fila vazia");
    }else{
        printf("O valor %d foi removido\n", fila[*frente]);
        fila[*frente] = 0;
        *frente = *frente + 1;
    }
}

int fila_tamanho(int tras, int frente){
    return (tras - frente) + 1;
}


int main(){
    int frente, tras;
    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};

    fila_construtor(&frente, &tras);

    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 7, &tras);
    

    fila_desenfileirar(fila, &frente, tras);
    fila_desenfileirar(fila, &frente, tras);
    fila_desenfileirar(fila, &frente, tras);

    fila_enfileirar(fila, 8, &tras);

    imprime_vetor(fila);

}