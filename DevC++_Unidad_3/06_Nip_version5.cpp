// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip = 123;
	int intento;
	cout << "Teclea tu NIP ";
	cin >> intento;
	if (intento == nip)
	{
		cout << "**CORRECTO**\n"
			 << intento << "Este es tu NIP";
	}
	else
	{
		cout << "**INCORRECTO**";
		intento > nip ? cout << "Demasiado alto" : cout << "Demasiado bajo";
	}

	return 0;
}