#include <iostream>

using namespace std;

int main() {
    int n;
    double sumaPares = 0, sumaImpares = 0;
    int contadorPares = 0, contadorImpares = 0;
    cout << "Ingrese el numero de elementos: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> num;
        if (num % 2 == 0) { // Si es par
            sumaPares += num;
            contadorPares++;
        } else { // Si es impar
            sumaImpares += num;
            contadorImpares++;
        }
    }
    double promedioPares = (contadorPares == 0) ? 0 : sumaPares / contadorPares;
    double promedioImpares = (contadorImpares == 0) ? 0 : sumaImpares / contadorImpares;
    cout << "Promedio de los numeros pares: " << promedioPares << endl;
    cout << "Promedio de los numeros impares: " << promedioImpares << endl;

    return 0;
}
