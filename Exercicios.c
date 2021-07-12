#include <stdio.h>
#include <stdlib.h>

void main () {
    float nota1, nota2, media;
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    media = (nota1 + nota2) /2;
    printf("A media eh igual a: %f\n", media);


}
