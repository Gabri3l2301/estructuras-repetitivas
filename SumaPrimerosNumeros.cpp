#include <iostream>
using namespace std;

int main (){
	int N , suma = 0;
	cout << "Introduce el valor de N: " << endl;
	cin >> N;
	if (N <= 0){
		cout << "Introduce un numero positivo" << endl;
	}
	for (int i = 1 ; i <= N ; i++){
		suma += i;
	}
	cout << "La suma de los primeros " << N << " numeros es: " << suma << endl;
	return 0;
}