#include <stdio.h>
//(  Padrão  ) parâmetro
typedef struct Data{  //Usa-se o typedef para abreviar e nao ficar escrevendo struct o tempo inteiro, será necessário escrever 
    int dia;         //apenas o que está logo após as chaves do typedef
    int mes;
    int ano;
}Data; //Nome que passará a ser usadoao invés de vários structs 

struct Aluno{
    int id; //Identificador do aluno
    Data nascimento; //O Data aqui se refere ao struct data criado anteriormente(tipo: Data)

};


int main(){
    //Criando aluno1
    struct Aluno aluno1;

    //Modificando valores
    aluno1.id = 15; //Código do aluno
    aluno1.nascimento.ano = 1996;
    aluno1.nascimento.mes = 1;
    aluno1.nascimento.dia = 17;

    //Imprimindo valores
    printf("Nascido em %d/%d/%d",aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);



























    return 0;
}