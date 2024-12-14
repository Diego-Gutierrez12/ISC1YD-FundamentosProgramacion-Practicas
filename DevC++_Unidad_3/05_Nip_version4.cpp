// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip = 123;
	int intento = 0;
	cout << "Teclea tu NIP: ";
	cin >> intento;
	if (intento == nip)
	{
		gotoxy(10, 11);
		cout << "**CORRECTO**";
		gotoxy(10, 12);
		cout << intento << " Este es tu NIP";
	}
	else
	{
		gotoxy(10, 11);
		cout << "**INCORRECTO**";
		gotoxy(10, 12);
		if (intento > nip)
		{
			cout << "Demasiado alto";
		}
		else
		{
			cout << "Demasiado bajo";
		}
	}

	return 0;
}