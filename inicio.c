#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    // permite usar acentos
    setlocale(LC_ALL,"");
    printf("Olá \n");

    // Lendo valor inteiro
    int a = 5;
    printf("O valor de a e: %d\n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para: %d\n", a);
    //Lendo valor quebrado
    float b = 5.5;
    printf("O valor de b e: %f\n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para: %f\n", b);
    // Lendo letra
    char c = 't';
    printf("O valor de c e: %c\n", c);
    fflush(stdin);
    scanf("%c", &c);
    printf("O valor de c mudou para: %c\n", c);
}
