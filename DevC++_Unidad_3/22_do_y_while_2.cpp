// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <stdio.h>
#include <windows.h>
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
	int x, c = 0;
	float sueldo, total;
	char opcion, nombre[10];
	while (c != 0)
	{
		cout << "Esto nunca se imprime ";
	}

	x = 1;
	while (x < 11)
	{
		cout << x << "\n";
		x++;
	}
	system("PAUSE");
	opcion = 's';
	while (opcion == 's' or opcion == 'S')
	{
		system("CLS");
		cout << "Dame tu nombre ";
		fflush(stdin);
		gets(nombre);
		cout << "Dame tu sueldo ";
		cin >> sueldo;
		total = total + sueldo;
		printf("Deseas capturar otro empleado <<s/n>>? ");
		cin >> opcion;
	}

	printf("Total de salarios= $%5.2f\n", total);
	cout << "Despues de la pausa el programa se cicla\n";
	system("pause");

	x = 0;
	while (x < 10) // nunca poner punto y coma porque no se cicla
	{
		cout << x << "\n";
		x++;
	}

	return 0;
}