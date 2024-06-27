#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int opcion = 1;
    float base1, base2, altura, area;
    char tecla;

    while (true) {
        system("cls"); // Limpiar pantalla

        cout << "CALCULO DE AREAS\n";
        cout << (opcion == 1 ? "-> " : "   ") << "1- Calcular el area de un triangulo.\n";
        cout << (opcion == 2 ? "-> " : "   ") << "2- Calcular el area de un trapecio.\n";
        cout << (opcion == 3 ? "-> " : "   ") << "3- Calcular el area de un rectangulo.\n";
        cout << (opcion == 4 ? "-> " : "   ") << "4- Salir\n";

        tecla = _getch();

        if (tecla == 72) { 
            if (opcion > 1) {
                opcion--;
            }
        } else if (tecla == 80) { 
            if (opcion < 4) {
                opcion++;
            }
        } else if (tecla == 13) { 
            if (opcion == 4) {
                break; 
            }
            system("cls");
            switch (opcion) {
                case 1:
                    cout << "Ingrese la base del triangulo: ";
                    cin >> base1;
                    cout << "Ingrese la altura del triangulo: ";
                    cin >> altura;
                    area = 0.5 * base1 * altura;
                    cout << "El area del triangulo es: " << area << endl;
                    break;
                case 2:
                    cout << "Ingrese la base mayor del trapecio: ";
                    cin >> base1;
                    cout << "Ingrese la base menor del trapecio: ";
                    cin >> base2;
                    cout << "Ingrese la altura del trapecio: ";
                    cin >> altura;
                    area = 0.5 * (base1 + base2) * altura;
                    cout << "El area del trapecio es: " << area << endl;
                    break;
                case 3:
                    cout << "Ingrese la base del rectangulo: ";
                    cin >> base1;
                    cout << "Ingrese la altura del rectangulo: ";
                    cin >> altura;
                    area = base1 * altura;
                    cout << "El area del rectangulo es: " << area << endl;
                    break;
            }
            cout << "Presione cualquier tecla para volver al menu principal...";
            _getch();
        }
    }

    return 0;
}
