#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void main() {

    //Crie um algoritmo que leia 3 valores e informe se eles sao
    //iguais entre si para formarem os lados de um triangulo equilatero.

    int a,b,c;

    printf("Digite os lados do triangulo: ");
    scanf("%d %d %d",&a,&b,&c);


    if (a==b && b==c){
        printf("\nTriangulo equilatero");
    }else{
        printf("Triangulo nao equilatero");
    }



}



