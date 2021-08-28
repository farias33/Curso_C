//Crie um algoritmo que imprima os números de 10 até 0
//de forma regressiva. Usando While, DoWhile e For.

//Do While
#include <stdio.h>
#include <stdlib.h>
 
int main () {

   int a = 10;
	
  do{
      printf("\n%d", a);
      a--;


    } while(a >= 1);
     
 
   return 0;
}

//While
int main () {

   int a = 10;
    
   while (a>=1){
       printf("%d",a);
      a--;

   }
     
 
   return 0;
} 


//For
int main () {

   int cont;
    
   for( cont = 10; cont >= 1; cont-- ){
      printf("%d\n", cont);
   }
 
   return 0;
}















