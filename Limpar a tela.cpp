#include <stdio.h>
#include<stdlib.h>

void limpatela(){
    system("CLS");
}

int main(){
    int a;

    printf("Digite um valor para 'a': ");
    scanf("%d", &a);

    //chama função que limpa a tela
    limpatela();                                 

    printf("O valor digitado foi %d \n Fim do programa!",a);

    return 0;
}