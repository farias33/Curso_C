//Crie um algoritmo que imprima os números pares de 10 a 20
//Usando While, Do While e For
#include <stdio.h>
#include <stdlib.h>
 
int main () {
    int a = 10;

    do{
        if(a%2 == 0){
            printf("\n%d", a);
            
        }
        
       
            a++;  //Porque nao posso botar isso dento do if?

    }while(a<=20);
    

   
   return 0;
}