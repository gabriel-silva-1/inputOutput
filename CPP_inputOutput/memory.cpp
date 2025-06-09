#include <iostream>
#include <string>
using namespace std;

int main() {
    // O operador & é usado para variavel de referencia e retornar endereço de memoria, o endereço vem em forma hexadecimal
    string comida = "Pizza";
    cout << &comida << endl;
    return 0;

}