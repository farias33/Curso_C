#include <stdio.h>
#include <iostream>
#include<stdlib.h>
#include<stdbool.h>
#include <string>
#define TAM 3
using namespace std;

int main(){
    //Definindo vetor
    //int vetor[TAM], cont;
    int vetor[TAM] = {5,10,15}, cont, i, j;
    //Passando valores para o vetor
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    
    //Imprimindo valores no vetor
    for(cont = 0;cont < TAM; cont++){
        printf("\n%d",vetor[cont]);
        cout << vetor[cont] << "\n";
    }
    //Reiniciar o contador
    cont = 0;

    //Imprimindo valore do vetor
    while(cont < TAM){
        printf("\n%d\n", vetor[cont]);
        cont++;
    }

    //Definindo matrizes
    //int matriz[3][3];
    //matriz[0][0] = 1; Método lento
    int matriz[TAM][TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9};


    //Imprimindo valores na tela
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }



    return 0;
}