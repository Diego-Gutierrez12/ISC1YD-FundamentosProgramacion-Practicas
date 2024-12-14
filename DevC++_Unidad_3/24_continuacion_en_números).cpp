// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, y = 1;
	cout << "Lectura de 5 números enteros usando do...while\n";
	do
	{
		cout << "Dame un número que no sea 0 (intento #" << y << ")\n";
		cin >> x;
		if (x == 0)
			continue;
		y++;
	} while (y < 6);
	system("pause");
	system("CLS");
	cout << "Lectura de 5 número usando  for estandar\n";
	for (y = 1; y < 6; y++)
	{
		cout << "Dame un número que no sea 0 (intento #" << y << "\n";
		cin >> x;
		if (x == 0)
			continue;
		cout << "Por aqui solo pasa el valor que es diferente a 0\n";
	}

	return 0;
}