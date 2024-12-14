// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Dame un numero para determinar si es positivo o negativo: ";
	cin >> n;
	n > 0 ? cout << "El numero es positivo " : cout << "El numero es negativo ";
	system("pause");
	if (n > 0)
		cout << "El numero es positivo\n";
	else
		cout << "El numero es negativo\n";
	system("pause");
	if (n < 0)
		cout << "El numero es negativo\n";
	else
		cout << "El numero es cero ";

	return 0;
}