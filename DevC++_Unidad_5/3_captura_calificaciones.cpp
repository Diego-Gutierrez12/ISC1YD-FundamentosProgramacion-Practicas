// Luis Diego Gutiérrez Pérez - Número de control: 24041179

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	struct Estudiante
	{
		string nombre;
		int edad;
		int calificaciones[5];
		int suma;
	};
	Estudiante estudiante1;
	cout << "Ingresa el nombre del estudiante: ";
	getline(cin, estudiante1.nombre); // getline se usa para cuando ocupas espacios
	cout << "Ingresa la edad del estudiante: ";
	cin >> estudiante1.edad;
	cout << "Ingresa las calificaciones de 5 materias:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Dame la calificacionnes de la unidad " << i + 1 << " : ";
		cin >> estudiante1.calificaciones[i];
		suma = suma + estudiante1.calificaciones[i];
	}
	cout << "\nInformación del estudiante\n";
	cout << "Nombre: " << estudiante1.nombre << "\n";
	cout << "Edad: " << estudiante1.edad << "\n";
	cout << "Calificaciones: ";
	for (int i = 0; i < 5; i++)
	{
		cout << estudiante1.calificaciones[i] << " ";
	}
	cout << "\n";

	return 0;
}