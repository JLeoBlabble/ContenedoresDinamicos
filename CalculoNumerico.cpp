#include <iostream>
#include <valarray>

using namespace std;

// Programa que utiliza valarray para realizar operaciones matemáticas
int main() {
    // Crear un valarray de números decimales
    valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    // Mostrar la suma de los elementos del valarray
    cout << "Suma: " << valores.sum() << endl;
    // Mostrar la media de los elementos del valarray
    cout << "Media: " << valores.sum() / valores.size() << endl;

    // Añadir 5.0 a cada elemento del valarray
    valores += 5.0;

    // Mostrar los nuevos valores del valarray
    cout << "Valores + 5.0: ";
    for(double valor : valores) {
        cout << valor << " ";
    }
    cout << endl;

    return 0;
}