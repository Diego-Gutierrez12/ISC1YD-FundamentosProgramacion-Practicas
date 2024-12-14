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
	cout << "Hola, este es una prueba de la función gotoxy." << endl;
	gotoxy(1, 1);
	cout << "Este letrero comienza en la posición (1,1)";
	gotoxy(30, 2);
	cout << "Este letrero el cursor a la columna 30, renglon 2";
	gotoxy(1, 20);
	cout << "Este letrero el cursor a la columna 1, renglon 20";
	system("pause");
	system("cls");
	cout << "     Impresion en las 4 esquinas",
		gotoxy(0, 0);
	cout << "*";
	gotoxy(80, 0);
	cout << "*";
	gotoxy(80, 20);
	cout << "*";
	gotoxy(0, 20);
	cout << "*";
	return 0;
}
