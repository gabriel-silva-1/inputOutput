// Referencia: & - Memoria
// Dereferencia: * - Valor

// O * tem duas funcoes:
// Cria ponteiros em declarações
// Dereferencia como operador

#include <iostream>
#include <string>
using namespace std;
int main() {
    string comida = "Pizza";
    string* ponteiro = &comida;
    cout << "Endereco de memoria: " << ponteiro << endl; 
    cout << "Comida: " << *ponteiro << endl;
    return 0;
}