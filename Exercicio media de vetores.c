#include <stdio.h>
#include<stdlib.h>



int main(){

    //Escreva um algoritmo que leia 3 valores para um vetor de 3 posições
    //e depois calcule a média dos valores acessando o vetor
    //Como subistituir os scanf's por um for
    
        int tamanho; //A variavel contador tem que ser int!

        printf("\nQual vai ser o tamanho do vetor?");
        scanf("%d", &tamanho);

        int i;
        float vetor[tamanho], soma;

        for(i = 0; i < tamanho; i++)
        {
            printf("\nDigite um valor para o vetor: ");
            scanf("%f", &vetor[i]);
            soma =  soma + vetor[i];
        }

        for(i = 0; i < tamanho; i++)
        {
            printf("\nVetor[%d] = %.2f", i ,vetor[i]);
        }

        printf("\nA média do valores é: %.2f", soma / tamanho);


return 0;

}