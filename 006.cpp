#include <iostream>
#include <string>

using namespace std;

struct Alumno {
    string nombre;
    float notas[3];
    float promedio;
};

int main() {
    Alumno alumnos[3];
  
    alumnos[0].nombre = "Juan";
    alumnos[0].notas[0] = 3.0;
    alumnos[0].notas[1] = 3.4;
    alumnos[0].notas[2] = 2.2;

    alumnos[1].nombre = "María";
    alumnos[1].notas[0] = 5.0;
    alumnos[1].notas[1] = 5.0;
    alumnos[1].notas[2] = 5.0;

    alumnos[2].nombre = "Pedro";
    alumnos[2].notas[0] = 5.0;
    alumnos[2].notas[1] = 5.0;
    alumnos[2].notas[2] = 3.0;


    for (int i = 0; i < 3; ++i) {
        float suma = 0;
        for (int j = 0; j < 3; ++j) {
            suma += alumnos[i].notas[j];
        }
        alumnos[i].promedio = suma / 3;
    }

    cout << "\nInformación de los alumnos:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Alumno " << i + 1 << ": " << alumnos[i].nombre << endl;
        cout << "Notas: ";
        for (int j = 0; j < 3; ++j) {
            cout << alumnos[i].notas[j] << " ";
        }
        cout << "\nPromedio: " << alumnos[i].promedio << endl;
    }

    return 0;
}
