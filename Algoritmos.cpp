#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Programa que ordena un vector de enteros y encuentra el elemento más grande
int main() {
    // Crear un vector de enteros
    vector<int> numeros = {50, 20, 60, 10, 30, 40};
    // Ordenar el vector usando la función sort
    sort(numeros.begin(), numeros.end());

    // Mostrar los elementos ordenados del vector
    for(int num : numeros) {
        cout << num << endl;
    }

    // Encontrar el elemento más grande usando la función max_element
    int maxNum = *max_element(numeros.begin(), numeros.end());
    cout << "Número máximo: " << maxNum << endl;

    return 0;
}