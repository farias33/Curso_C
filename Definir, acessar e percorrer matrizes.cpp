#include <stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std; 
int main(){


    /*
    vetor = [0] [1] [2] ;

    matriz = [0.0][0.1][0.2]
             [1.0][1.1][1.2]
    */
   //Criando matriz
    int matriz [2] [2];
    int i, j; //As coordenadas da matriz
    
    //Passando valores para suas respectivas coordenadas
    matriz [0] [0] = 1; 
    matriz [0] [1] = 2;
    matriz [1] [0] = 3; 
    matriz [1] [1] = 4; 
    //Imprimindo os índices
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            //cout << "\nI = " << i << ", J = " << j;
            cout << matriz [i] [j] << " ";
        }
        cout <<"\n";
    }

    


return 0;

}