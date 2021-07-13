#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo variaveis
    int a = 5, opcao = 1;
    float b = 2.5;
    char c = 'x';
    //Condicional Simples
    if (a == 5){
        printf("A variavel a e igual a 5 \n");
    }


    if (b == 2.5){
        printf("A variavel b eh igual a 2.5 \n");
    }

    if (c == 'x'){
        printf("A variavel c eh igual a x \n");
    }

    //Numero par ou impar(condicional composta)
    if(a % 2 == 1){
        printf("\n A variavel eh impar");
   }else {
       printf("\n A variavel eh par");
   }

    //Condicional composta
    if (opcao == 1){
        printf("\n A opcao = 1");

    }else if(opcao == 2){
        printf("\n A opcao = 2");
    }else{
        printf("\n A opcao nao eh nem 1 nem 2");

    }

       //Pausa o programa apos executar
       system("pause");

   }























