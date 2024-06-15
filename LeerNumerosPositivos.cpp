#include <iostream>
using namespace std;

int main (){
	int num;
	do {
		cout << "Introduce un numero entero (Introduce un numero negativo para salir): " << endl;
		cin >> num;
		if (num >= 0){
			cout << "Numero ingresado: " << num << endl;
		}
	}while (num >= 0);
	cout << "Ha introducido un numero negativo. Fin del programa." << endl;
	return 0;
}