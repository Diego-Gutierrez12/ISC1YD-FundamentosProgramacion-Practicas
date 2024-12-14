// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int num_h, num_m, total;
	float porcent_h, porcent_m;
	// cout<<(escribir)
	// cin>>(leer)

	cout << "dime la cantidad de hombres asistentes: ";
	cin >> num_h;
	cout << "dime la cantidad de mujeres asistentes: ";
	cin >> num_m;
	total = num_h + num_m;
	cout << "el total de asistentes es de: " << total << "\n";
	porcent_h = num_h * 100 / total;
	porcent_m = num_m * 100 / total;
	cout << "hombres: " << porcent_h << "%\n"
		 << "mujeres: " << porcent_m << "%";

	return 0;
}