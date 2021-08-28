//Leia várias idades e calcule a média entre as idades (usar uma variável para idade).
#include<stdio.h>

int main()
{
int idades, soma_idades=0, qtde_idades, cont;

float media;

printf("Quantas idades serão utilizadas? ");
scanf ("%d", &qtde_idades);
for(cont=1;cont<=qtde_idades;cont++)
   {
     printf("Entre com a idade %d : ",cont);
     scanf("%d", &idades);
     soma_idades = soma_idades + idades;
    }

media = soma_idades/qtde_idades;
printf ("\n A media de idades é de : %.1f", media);

return 0;
}


