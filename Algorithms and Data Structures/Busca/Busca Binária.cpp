#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
 
using namespace std; //para utilizar cout
 
void imprime_vetor(int vetor[TAM]){
 
     //Imprime o vetor para o usuário poder escolher qual numero do vetor ela quer achar
    for(int i = 0; i < TAM; i++){
        printf("%d - ",vetor[i]);
    }
    printf("\n");
}
 
int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){    //A última posição do meu vetor sempre é o tamanho do vetor - 1
 
    //Auxiliar contador
    int cont;
 
    //Verifica se o valor foi encontrado
    bool valorFoiEncontrado;
 
    //Percorre a lista em busca do valor
    for(cont = 0; cont < TAM; cont++){
        if(vetor[cont] == valorProcurado){
            valorFoiEncontrado = true;
            *posicaoEncontrada = cont;
        }
    }
 
    if(valorFoiEncontrado){
        return 1;
    }else{
        return -1;
    }
}
/*Quando o cursos começa no meio, o limite da esquerda é o cursor e o limite da direta é o tamanho do vetor,
quando excluimos um dos lados e vamos continuar a busca na outra metade, o limite da esquerda e da direita
continuam funcionando da mesma forma, mas com base naquela metade
vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98}
             0   1   2   3   4   5   6   7   8
*/
int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){
 
    int esquerda = 0;           //Limite da esquerda(Inicio)
    int direita = TAM - 1;      //Limite da direita(Fim)(sempre "- 1" por conta do index do vetor)
    int meio;                   //O meio onde fica o cursor(pivot)
 
    while(esquerda <= direita){ // Os limites estao sempre indo em direcao ao valor pesquisado, logo a esquerda sempre tem que ser menor ou igual a direita
 
        //Encontra o meio da análise
        meio = (esquerda + direita) / 2;
 
        //Quando o valor do meio é encontrado
        if(valorProcurado == vetor[meio]){
            *posicaoEncontrada = meio;
            return 1;
        }
 
        //Ajustando os limites laterais
        if(vetor[meio] < valorProcurado){
            esquerda = meio + 1;
        }else{
            direita = meio - 1;
        }
 
    }
 
    return -1;
 
}
 
int main(){
 
    int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
    int valorProcurado;
    int posicao, posicaoEncontrada;
 
    //Auxiliar contador
    int cont;
 
    //Imprime o vetor na tela
    imprime_vetor(vetor);
 
    //Lendo o número buscado
    printf("Qual numero deseja encontrar?");
    scanf("%d", &valorProcurado);
 
 
    if(busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1){ //Por conta dessa condicao, na funcao retornamos 1 quando encontrado
        printf("O valor foi encontrado na posicao:", posicaoEncontrada);
    }else{
        printf("Valor nao encontrado");
    }
 
    return 0;
 
}