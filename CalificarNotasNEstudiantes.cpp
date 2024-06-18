#include <iostream>
using namespace std;

int main() {
    int N, aprobados = 0, desaprobados = 0;
    double nota, suma = 0, promedio;
    char continuar;
    cout << "Ingrese el numero de estudiantes del curso: ";
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
        if (nota >= 11) {
            aprobados++;
        } else {
            desaprobados++;
        }
        cout << "Desea ingresar otra nota? (s/n): ";
        cin >> continuar;
        if (continuar != 's' && continuar != 'S') {
            break;
        }
    }
    promedio = suma / N;
    
    cout << "Cantidad de estudiantes aprobados: " << aprobados << endl;
    cout << "Cantidad de estudiantes desaprobados: " << desaprobados << endl;
    cout << "Promedio del salon: " << promedio << endl;

    return 0;
}

