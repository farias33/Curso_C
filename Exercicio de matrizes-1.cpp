#include <stdio.h>//ESCREVER UM PROGRAMA PARA SOMAR DUAS MATTIZES DE ORDEM 3 X 2. A SOMA DAS MATRIZES A E V DEVE SER ARMAZENADA NA MATRIZ C!!!
#include <stdlib.h>//Decomposição: 1. declarar variáveis, 2. obter os valores das matrizes, 3. calcular soma dos valores e armazenar na matriz resultante, 4. mostras resultados
                                                                                             

int main(){
    //Definindo matrizes
    int A[3][2], B[3][2], C[3][2];
    //Definindo variáveis contadoras
    int i, j;

    //Ler matriz A
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            scanf("%i", &A[i][j]); //Ler os valores a serem colocados para a matriz A
        }

    }

    //Ler matriz B
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            scanf("%i", &B[i][j]); //Ler os valores a serem colocados para a matriz B
        }

    }

   
    //Soma A e B, e mostra  matriz C
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            C[3][2] = A[3][2] + B[3][2];
            printf("%i", &C[i][j]); 
        }
        printf("\n");
    }



    

    return 0;
}