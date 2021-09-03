#include <stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std; 
int main(){

    int matriz [2] [2];
    int i, j; 
    
    
    matriz [0] [0] = 1; 
    matriz [0] [1] = 2;
    matriz [1] [0] = 3; 
    matriz [1] [1] = 4; 
 
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            //cout << "\nI = " << i << ", J = " << j; Imprimir os índices se necessário
            /* Em C
            printf("Digite 4 valores inteiro para a matriz: ")
            scanf("%d", &matriz[i][j]);
            */
            cin >> matriz[i][j];
        }
        
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << matriz [i] [j] << " "; 
        }
        cout << "\n";
    }
    


return 0;

}