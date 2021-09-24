#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero){
    printf("\nO sucessor de %d eh %d",numero ,numero + 1);

}
int retornaAntecessor(int numero){
    return numero - 1;
}

int main(){
    //Definindo variáveis
    int a;

    printf("Digite um valor para a: ");

    //Passa um valor para a

    scanf("%d",&a);


    //Chama função
    mostraSucessor(a);

    ///Exibe o antecessor
    printf("\nO antecessor de %d eh %d", a, retornaAntecessor);

    return 0;
}