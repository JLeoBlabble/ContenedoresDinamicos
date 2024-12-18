#include <iostream>
#include <vector>

using namespace std;

// Programa que añade elementos a un vector de enteros y los muestra usando un iterador
int main() {
    // Crear un vector de enteros y añadir elementos usando push_back
    vector<int> numeros;
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    numeros.push_back(50);

    // Usar un iterador para recorrer y mostrar cada elemento del vector
    for(vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}