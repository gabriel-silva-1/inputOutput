#include <iostream>
using namespace std;
#include <string>

int main(){
    /* Variavel de referencia é nome alternativo para variavel existente, criada usando operador "&" */
    string comida = "Pizza";
    string &jantar = comida; // Variavel de referencia

    cout << "Comida: " << comida << endl;
    cout << "Jantar: " << jantar << endl;
    return 0;

    // comida e jantar apontam para o mesmo local na memoria, modifcar um altera o outro
}
