#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
    string direccion;
};

int main() {
    // Crear una variable de tipo struct Persona
    Persona persona1;
    
    // Asignar valores a los campos
    persona1.nombre = "Juan";
    persona1.edad = 30;
    persona1.direccion = "Calle Falsa 123";
    
    // Acceder a los valores
    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad << endl;
    cout << "Direccion: " << persona1.direccion << endl;

    return 0;
}
