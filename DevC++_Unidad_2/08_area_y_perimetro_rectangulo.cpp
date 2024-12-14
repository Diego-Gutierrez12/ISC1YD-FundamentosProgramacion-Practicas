// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float lado1, lado2, area, perimetro;
	cout << "Dame la medida del lado 1: ";
	cin >> lado1;
	cout << "Dame la medida del lado 2: ";
	cin >> lado2;
	perimetro = (lado1 * 2) + (lado2 * 2);
	area = lado1 * lado2;
	cout << "El área mide: " << area << "\n";
	cout << "El perímetro es de: " << perimetro << "\n";
	// print f
	printf("El área mide: %5.0f\n", area);
	printf("El perímetro es de: %5.2f\n", perimetro);

	return 0;
}
