#include <stdio.h>
#include<stdlib.h>



int main(){
    char palavra [255];
    //Instrução
    printf("Digite uma palavra:\n");

    //Limpeza da entrada ou buffer
    setbuf(stdin, 0);

    //Lê a String
    fgets(palavra, 255, stdin);

    /*
    Imprime na tela
    printf("%s", palavra);
    Está correto porém ocupa muita memória
    */
   //Limpa as casa não utilizadas do meu vetor
   palavra [strlen(palavra)- 1] = '\0';

   printf("%s",palavra);


    


return 0;

}