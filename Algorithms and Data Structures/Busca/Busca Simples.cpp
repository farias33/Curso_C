#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
 
 
void imprime_vetor(int vetor[TAM]){
 
     //Imprime o vetor para o usuário poder escolher qual numero do vetor ela quer achar
    for(int i = 0; i < TAM; i++){
        printf("%d - ",vetor[i]);
    }
    printf("\n");
}
 
int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){ //Usa-se o ponteiro pois ao invés de mudar o valor apenas no escopo da função, ele muda lá no endereço da memória dele, facilitando o progarama
 
    //Verifica se o valor foi encontrado
    bool valorFoiEncontrado;
 
    //Percorre a lista em busca do valor
    for(int i = 0; i < TAM; i++){
        if(vetor[i] == valorProcurado){
            valorFoiEncontrado = true;
            *posicaoEncontrada = i;
        }
    }
 
    if(valorFoiEncontrado){
        return 1;
    }else{
        return 0;
    }
}
 
int main(){
 
    int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
    int valorProcurado;
    int posicaoEncontrada;
 
    imprime_vetor(vetor);
 
    printf("Qual numero deseja encontrar: ");
    scanf("%d", &valorProcurado);
    //a posicaoEncontrada foi passada por referencia(passando o end. da memoria como )
    if(busca_simples(vetor, valorProcurado, &posicaoEncontrada) == 1){
        printf("O valor %d foi encontrado na posicao: %d",valorProcurado, posicaoEncontrada );
    }else{
        printf("Valor nao encontrado");
    }
 
    return 0;
 
}