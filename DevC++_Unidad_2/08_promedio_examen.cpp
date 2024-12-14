// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int rc, ri, rb, cf;
	cout << "las respuestas correctas valen 5 puntos c/u\n";
	cout << "las respuestas incorrectas restan 1 punto c/u\n";
	cout << "las respuestas en blanco valen 0 puntos c/u\n";
	cout << "Dame el numero de respuestas correctas:\n";
	cin >> rc;
	cout << "Dame el numero de respuestas incorrectas:\n";
	cin >> ri;
	cout << "Dame el numero de respuestas en blanco:\n";
	cin >> rb;
	cf = (rc * 5) + (ri * (-1)) + (rb * 0);
	cout << "La calificación final es de:\n"
		 << cf;
	printf("La calificación final es de: %d\n", cf);
	cf = rc * 5 - ri;
	cout << "La calificación final es de:\n"
		 << cf;
	printf("La calificación final es de: %d\n", cf);

	return 0;
}
