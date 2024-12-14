// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Dame un numero para saber si es par o impar\n";
	cin >> n;

	if (n % 2)
		cout << "El numero es impar\n";
	else
		cout << "El numero es par\n";

	if (n % 2 == 0)
		cout << "El numero es par\n";
	else
		cout << "El numero es impar\n";

	return 0;
}