#include <iostream>
#include <lexical_cast.hpp>

using namespace std;
using namespace boost;

// Programa que utiliza boost::lexical_cast para convertir una cadena en un número entero
int main() {
    // Cadena de caracteres a convertir
    string s = "12345";

    try {
        // Convertir la cadena en un número entero usando boost::lexical_cast
        int i = lexical_cast<int>(s);
        cout << "Número: " << i << endl;
    } catch(bad_lexical_cast &e) {
        // Manejar cualquier excepción que pueda lanzar boost::lexical_cast
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}