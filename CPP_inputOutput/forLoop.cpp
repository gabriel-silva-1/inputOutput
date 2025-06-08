// Dado um numero N, leia N inteiros e imprima a soma deles.
// 1 + 2 + 3 + 4 = 10
#include <iostream>
using namespace std;

int main() {
    int numero = 0;
    int soma = 0;
    cin >> numero;
    for ( int contador = 0; contador < (numero +1); contador++) { //Apanhei aqui, solucao era colocar numero + 1 em paranteses pra resolver a expressão primeiro antes de iterar
        soma = soma + contador;
    }
    cout << soma;
    return 0;
}
