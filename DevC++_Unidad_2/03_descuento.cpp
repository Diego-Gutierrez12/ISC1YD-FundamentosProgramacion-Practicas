// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float precio, porcentaje, precio_f, desc, porcentaje_f;

	cout << "dame el precio del producto: ";
	cin >> precio;
	cout << "dame el porcentaje de descuento: ";
	cin >> porcentaje;
	porcentaje_f = porcentaje * 0.01;
	desc = precio * porcentaje_f;
	precio_f = precio - desc;
	cout << "el precio con descuento es de: " << precio_f << "\n";
	cout << "el descuento es de: " << desc;
	return 0;

	// porcentaje= 10%=0.1 20%=0.2
}