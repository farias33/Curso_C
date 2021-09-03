#include <stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std; // Me permite retirar o std que fica anterior às palavras cin, cout e string
//Em C++ não posso trabalhar com void main(){}, logo tenho que usar o int main(){} e também o return 0;
int main(){

    std::string palavra; //Criar string

    cout << "Digite uma palavra: "; // Mesma coisa que usar: printf("Digite uma palavra: ");

    std::cin >> palavra; //Lendo uma string

    std::cout << "\nA palavra é:" << palavra; //Imprimindo uma variável


return 0;

}