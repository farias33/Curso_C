#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    // Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 3 n�meros inteiro de uma s� vez e coloque os resultados de multiplica��o entre os 3 em uma var�vel pr�pria, depoois exibas essa vari�vel

    int a,b,c;
    printf("Digite 3 n�meros:");
    scanf("%d %d %d",&a, &b, &c);

    printf("Multiplica��o:%d",(a*b*c));






























}
