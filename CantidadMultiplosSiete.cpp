#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Introduce la cantidad de multiplos de 7 que desea ver:" << endl;
	cin >> n;
	if (n <= 0){
		cout << "ERROR, introduce un numero positivo" << endl;
	}
	for (int i ; i <= n ; i++){
		cout << 7 * i << " ";
	}
	return 0;
}