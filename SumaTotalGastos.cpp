#include <iostream>
using namespace std;

int main (){
	int N;
	double gasto , suma = 0;
	char continuar;
	cout << "Ingrese el numero de gastos realizados en un viaje: " << endl;
	cin >> N;
	for (int i = 1 ; i <= N ; i++){
		cout << "Ingrese el gasto " << i << ": ";
		cin >> gasto;
		suma += gasto;
		cout << "Desea ingresar otro gasto? (s/n): ";
		cin >> continuar;
		if (continuar != 's' && continuar != 'S'){
			break;
		}
	}
	cout << "La suma total de gastos es: " << suma << endl;
	return 0;
}