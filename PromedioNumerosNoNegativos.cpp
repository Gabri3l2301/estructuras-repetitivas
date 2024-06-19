#include <iostream>
using namespace std;

int main() {
    int n , contador = 0;
    double suma = 0;
    cout << "Ingrese el numero de elementos en la lista: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        double num;
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> num;
        if (num >= 0) {
            suma = suma + num;
            contador++;
        }
    }
    double promedio = (contador == 0) ? 0 : suma / contador;
    cout << "El promedio de los numeros no negativos es: " << promedio << endl;

    return 0;
}
