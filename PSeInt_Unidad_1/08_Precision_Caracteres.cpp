// Luis Diego Gutiérrez Pérez - Número de control: 24041179

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	// configurar la consola para que use UTF-8
	SetConsoleOutputCP(CP_UTF8);
	double valor = 123.456789;

	// fixed (activar precision)
	cout << fixed;
	cout.precision(2);
	cout << "con 2 decimales: " << valor << endl;
	cout.precision(4);
	cout << "con 4 decimales: " << valor << endl;
	cout.precision(6);
	cout << "con 6 decimales: " << valor << endl;

	// desactivar fixed (presicion)
	cout.unsetf(ios::fixed);
	cout.precision(2);
	cout << "con 2 digitos significativos: " << valor << endl;
	cout << "prueba se áéíóúñ#";
}