#include <stdio.h>
#include<stdlib.h>
#define TAM 3
//   Variável  Valor atribuído
//Constantes salvam memória
int main(){
    //Definindo numero de gavetas do vetor
    int vetor[TAM];
    int cont;
    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;
    //Exibindo os valores do vetor
    printf("\nPosição 0 : %d",vetor[0] * vetor[1]);
    printf("\nPosição 1 : %d",vetor[1] + vetor[2]);
    printf("\nPosição 2 : %d",vetor[2]);

    //Imprimindo vetor em um laço de repetição 
    for(cont = 0; cont < TAM; cont++){
        printf("\nPosição %d : %d",cont ,vetor[cont]);
    }

    //Adicionando 1 para cada posição
    for(cont = 0; cont < TAM; cont++){
        vetor[cont] = vetor[cont] + 1;
    }


    //Lendo 3 valores para um vetor
    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }

     for(cont = 0; cont < TAM; cont++){
        printf("\nPosição %d : %d",cont ,vetor[cont]);
    }





return 0;

}