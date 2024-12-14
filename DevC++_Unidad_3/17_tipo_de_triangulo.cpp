// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int main()
{
	float lado1, lado2, lado3;
	cout << "Dame el primer lado: ";
	cin >> lado1;
	cout << "Dame el segundo lado: ";
	cin >> lado2;
	cout << "Dame el tercer lado: ";
	cin >> lado3;
	if (lado1 == lado2 && lado1 == lado3)
		cout << "El triangulo es equilatero";
	else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
		cout << "El triangulo es escaleno";
	else
		cout << "El triangulo es isoceles";

	return 0;
}