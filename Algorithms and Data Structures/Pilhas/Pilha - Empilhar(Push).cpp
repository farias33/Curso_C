#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
 
using namespace std; 

//LIFO(Last in first out); O último a entrar é o primeiro a sair, empilho(Push) e desempilho(Pop)

void imprime_vetor(int vetor[TAM]){
    printf("\n");
     //Imprime o vetor para o usuário poder escolher qual numero do vetor ela quer achar
    for(int i = 0; i < TAM; i++){
        printf("%d - ",vetor[i]);
    }
}

void pilha_push(int pilha[TAM], int valor, int *topo){

    //Primeiro preciso verificar se minha pilha está cheia(totalmente preenchida) ou não


    //Caso nao possa colocar mais valores
    if(*topo == TAM -1){
        printf("Pilha cheia");
    }else{
        *topo += 1; //Topo = 0, 
        pilha[*topo] = valor; //Agora vou empilhar
    }
}

int main(){
    int topo = -1; //Topo da pilha

    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    

    imprime_vetor(pilha);
    
    
    pilha_push(pilha, 5, &topo); //Como o valor topo vai ser atualizado, eu passo ele como referencia
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 5, &topo);
    imprime_vetor(pilha);


}