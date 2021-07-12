#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    // Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 3 números inteiro de uma só vez e coloque os resultados de multiplicação entre os 3 em uma varável própria, depoois exibas essa variável

    int a,b,c;
    printf("Digite 3 números:");
    scanf("%d %d %d",&a, &b, &c);

    printf("Multiplicação:%d",(a*b*c));






























}
