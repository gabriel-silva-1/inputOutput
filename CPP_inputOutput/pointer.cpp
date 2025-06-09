#include <iostream>
#include <string>
using namespace std;

int main() {
    //Ponteiro, variavel que armazena o endereço de memoria como seu valor
    //Ponteiro aponta para um tipo de dado (int, string)
    //Criado com o operador "*"
    //Endereço da variavel que voce esta trabalhando é assinalado ao ponteiro
    string comida = "Pizza";
    string* ponteiro = &comida;
    // O tipo de ponteiro deve ser o mesmo tipo da variavel que ele aponta, nesse caso string
    cout << "Comida: " << comida << endl;
    cout << "Endereço de memoria: " << &comida << endl; // Endereço de memoria da variavel comida usando o operador "&"
    cout << "Ponteiro: " << ponteiro << endl; // Endereço de memoria da variavel comida armazenado no ponteiro
    return 0;

}