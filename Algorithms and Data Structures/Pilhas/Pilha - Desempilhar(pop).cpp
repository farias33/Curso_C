#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
 
void imprime_vetor(int vetor[TAM], int topo){
    printf("\n");
     
    for(int i = 0; i < TAM; i++){
        printf("%d - ",vetor[i]);
    }

    printf("Topo: %d", topo);

    printf("Topo: %d", topo); //Imprime tamanho da pilha
} 

//Função pra verificar se a pilha está vazia
bool pilha_vazia(int topo){
    if(topo == -1){
        return true;
    }else{
        return false;
    }
}
//Verifica se a pilha está cheia
bool pilha_cheia(int topo){
    if(topo == TAM - 1){
        return true;
    }else{
        return false;
    }
}


void pilha_push(int pilha[TAM], int valor, int *topo){

    
    if(pilha_cheia(*topo)){//*topo == TAM -1
        printf("Pilha cheia");
    }else{
        *topo += 1; 
        pilha[*topo] = valor; 
    }
}

void pilha_pop(int pilha[TAM], int *topo){
    //Preciso verificar se minha pilha já está vazia
    if(pilha_vazia(*topo)){ //*topo == -1
        printf("Pilha já está vazia");
    }else{
        printf("Valor removido: %d", pilha[*topo]);
        pilha[*topo] = 0; //So depois de remover o valor 
        *topo -= 1; //Removendo elemento da pilha
    }
}

void pilha_construtor(int pilha[TAM], int *topo){
    //Coloca o topo negativo para indicar uma pilha vazia
    *topo = -1;

    for (int i = 0; i < TAM; i++){
        pilha[i] = 0;
    }

}
//Tamanho da pilha
int pilha_tamanho(int topo){
    return topo + 1;
}

//Retorna o ultimo valor da minha pilha
int pilha_get(int pilha[TAM], int *topo){
    if(pilha_vazia(*topo)){
        printf("A pilha esta vazia");
        return 0;
    }else{
        return pilha[*topo];
    }
}


int main(){
    int topo = -1; 
    int pilha[TAM];
    
    pilha_construtor(pilha, &topo);

    imprime_vetor(pilha, topo);
    
    if(pilha_vazia(topo)){
        printf("A pilha está vazia");
    }




    pilha_push(pilha, 5, &topo);
    imprime_vetor(pilha, topo);

    printf("Ultimo valor da pilha", pilha_get(pilha, &topo));
    printf("Tamanho da pilha: %d", pilha_tamanho(topo));

    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    imprime_vetor(pilha, topo);

    if(pilha_cheia(topo)){
        printf("A pilha está cheia");
    }


    pilha_pop(pilha, &topo);
    imprime_vetor(pilha, topo);

}