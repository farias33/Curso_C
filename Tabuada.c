#include <stdio.h>
#include <stdlib.h>
void main(){
    //O contador nada mais é do que a tabuada
    int num, cont, resul;
    printf("\nDigite um número entre 1 e 10: ");
    scanf("%d", &num);

        if(num >= 1 && num <= 10){ //Valida se o número está entre 1 e 10
            for(cont = 1; cont <= 10; cont++){
                resul = (num*cont);
                printf("\n%d X %d = %d", num, cont, resul);
            }
        }else{
            printf("O número não está entre 1 e 10");
        }

    

    }

