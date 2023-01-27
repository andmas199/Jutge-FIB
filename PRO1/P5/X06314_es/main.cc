//Pre: varias secuencias de numeros acabadas en 0
//Post: el numero de secuencias similares, es decir, que la suma de sus numeros y el ultimo de ellos sean iguales.

#include <iostream>
using namespace std;

void info_secuencia(int& suma, int& ultimo) {
	int x = 1;
	ultimo = 0;
	while (x != 0) {
		cin >> x;
		suma += x;
		if (x != 0) ultimo = x;
	}
}

int main() {
	int x0 = 0, x = 1, sum0 = 0, counter = 1;

	while (x != 0) {
		cin >> x;
		sum0 += x;
		if (x != 0) x0 = x;
	}

	x = 1;
	int sum1 = 1, seqlast = 1;
	while (x != 0 and seqlast != 0) {
		sum1 = 0;
		info_secuencia(sum1, seqlast);
		if (sum0 == sum1 and x0 == seqlast) counter++;
	}

	cout << counter << endl;
}
