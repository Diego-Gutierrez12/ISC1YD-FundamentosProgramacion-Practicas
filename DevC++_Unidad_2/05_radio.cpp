// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	float radio, area = 0.0, circunferencia = 0.0;
	const float PI = 3.1416;
	cout << "PI=" << PI << "\n";
	// PI=0; //no se puede modificar una constante
	cout << fixed;
	cout.precision(4);
	cout << "dame el radio de un circulo: ";
	cin >> radio;
	area = PI * radio * radio;
	circunferencia = PI * radio * 2;
	cout << "usando precision a cuatro decimales con fixed\n";
	cout << "para un circulo de radio: " << radio << "\n";
	cout << "el área es: " << area << "\n";
	cout << "circunferencia es " << circunferencia << "\n";
	cout << "usando precisión a dos decimales con printf\n";
	printf("para un círculo de radio: %5.2f \n", radio);
	printf("el área es: %5.2f \n", area);
	printf("la circunferencia es de: %5.2f \n", circunferencia);

	return 0;
}