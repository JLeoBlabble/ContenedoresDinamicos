#include <iostream>
#include <list>
#include <stack>

using namespace std;

// Programa que utiliza una lista para almacenar números decimales y un stack para mostrar los elementos
int main() {
    // Crear una lista de números decimales
    list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    // Crear un stack usando la lista como contenedor subyacente
    stack<float, list<float>> pila;

    // Añadir elementos de la lista al stack
    for (float num : lista) {
        pila.push(num);
    }

    // Mostrar y eliminar elementos del stack hasta que esté vacío
    while(!pila.empty()) {
        cout << pila.top() << endl;
        pila.pop();
    }

    return 0;
}