#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void main() {

    //Crie um algotitmo que leia dois valores e depois
    //crie um menu(usando SwitchCase) de 4 opcoes:
    //1-Somar, 2-Subtrair, 3-Dividir, 4-Multiplicar.
    //Depois que o usuario escolher uma opcao, mostre o
    //resultado da operacao escolhida com dois valores lidos.

    float a, b;
    int escolha;
    printf("Digite um valor: ");
    scanf("%f",&a);
    printf("Digite outro valor: ");
    scanf("%f",&b);
    printf("Escolha uma operacao: ");
    printf("\n1-Somar");
    printf("\n2-Subtrair");
    printf("\n3-Dividir");
    printf("\n4-Multiplicar");
    scanf("\n%d",&escolha);



    switch (escolha)
    {
    case 1:
        printf("\nA + B = %f",(a+b));
        break;
    case 2:
        printf("\nA - B = %f",(a-b));
        break;
    case 3:
        printf("\nA / B = %f",(a/b));
        break;
    case 4:
        printf("\nA * B = %f",(a*b));
        break;
    default:
        break;
    }

}

