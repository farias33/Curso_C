#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int *vetor, int tamanho){
    //Variável contadora
    int i;
    //Percorrer vetor
    for(i = 0; i < tamanho; i++){              //Dessa forma posso imprimir qualquer vetor independente de seu tamanho
        printf("%d\n",vetor[i]);
    }

}

void modificaVetor(int *vetor, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){             
        vetor[i] = vetor[i] * 2;
    }

}


int main(){
    //Definindo Vetor
    int v[3] = {1,2,3};   //Um vetor é tratado automaticamente como ponteiro nas funções
    //Mostrando vetor
    imprimeVetor(v, 3);
    //Modifica vetor
    modificaVetor(v, 3);
    //Mostrando vetor modificado
    imprimeVetor(v, 3);

    return 0;
}