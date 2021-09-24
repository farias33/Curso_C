#include <stdio.h>
#include <stdlib.h>

int retornaComMaisDez(int numero){
    return numero + 10;
}

void aumentaDez(int *numero){
    *numero = *numero + 10;
}

int main(){
    //Definindo variáveis
    int a = 5;
    //Mostrando valor
    printf("%d \n",a);

    //Aumenta  10
    a = retornaComMaisDez(a);

    //Mostrando valor
    printf("%d \n",a);

    //Função que aumenta 10 diretamente
    aumentaDez(&a);

    printf("%d \n",a);










    return 0;
}