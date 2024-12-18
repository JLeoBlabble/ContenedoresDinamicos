#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

using namespace std;

// Programa que utiliza expresiones lambda, inferencia de tipos y punteros inteligentes
int main() {
    // Definir una función lambda que devuelve el cuadrado de un número
    auto cuadrado = [](int num) { return num * num; };

    // Mostrar el cuadrado de 5 usando la función lambda
    cout << "Cuadrado de 5: " << cuadrado(5) << endl;

    // Crear un vector de enteros
    vector<int> numeros = {1, 2, 3, 4, 5};
    // Usar un bucle for_each para recorrer y mostrar cada elemento del vector
    for_each(numeros.begin(), numeros.end(), [](int num) {
        cout << num << endl;
    });

    // Crear un puntero inteligente shared_ptr
    shared_ptr<int> ptr(new int(10));
    // Mostrar el valor apuntado por el puntero inteligente
    cout << "Valor apuntado por ptr: " << *ptr << endl;

    return 0;
}