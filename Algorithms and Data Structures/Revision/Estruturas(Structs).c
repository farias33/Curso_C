#include <stdio.h>
#include <string.h>
//Estrutura structs é uma forma do C de meio que trabalhar com objetos(não como programação orientada a objetos)
struct palavra{ //Poderia também ter criado uma bola, que receberia cor, peso, ...
    int ordem;  //O importante pe pensar que é uma estrutura que está recebendo algum tipo de objeto         
    char letra;
    char texto[255]; //Vetor de char == String
};

int main(){

    //Criar uma palavra
    struct palavra primeiraPalavra; //Criando uma variável do tipo (struct palavra)(a variável aqui é  primeiraPalavra)

    //Modificando os campos
    primeiraPalavra.ordem = 0;

    primeiraPalavra.letra = 'p';

    strcpy(primeiraPalavra.texto, "palavrinha"); //String copy: Colocar palavras

    //Mostrando valores do struct
    printf("Ordem: %d\n", primeiraPalavra.ordem);
    printf("Primeira letra: %c\n", primeiraPalavra.letra);
    printf("Palavra: %s", primeiraPalavra.texto);

    //Fazendo uma lista de struct
    struct palavra ListaDePalavras[3];

    //Modificando os campos
    ListaDePalavras[0].ordem = 0;
    ListaDePalavras[1].ordem = 1;
    ListaDePalavras[2].ordem = 2;

    ListaDePalavras[0].letra = 'd';
    ListaDePalavras[1].letra = 'l';
    ListaDePalavras[2].letra = 'b';

    strcpy(ListaDePalavras[0].texto, "Dahora");
    strcpy(ListaDePalavras[1].texto, "Legal");
    strcpy(ListaDePalavras[2].texto, "Bacana");

    //Percorrendo o vetor

    for(int cont = 0; cont < 3; cont++){
        printf("\nOrdem: %d, Primeira letra: %c, Palavra: %s", ListaDePalavras[cont].ordem, ListaDePalavras[cont].letra, ListaDePalavras[cont].texto);
    }












    return 0;
}