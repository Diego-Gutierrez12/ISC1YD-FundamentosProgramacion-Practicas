// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char c;
	int opcion;
	/* cout<<"Dame un valor binario 0/1: ";
	   cin>>c;
	   switch(c)
	   {
		   case '0':
		   cout<<"Falso o apagado\n";
			   break;
			   case '1':
		   cout<<"Cierto o encendido\n";
			   break;
			   default:
				   cout<<"Tecleaste un valor incorrecto\n";*/

	system("pause");
	system("cls");
	printf("1.-QUÍMICA\n");
	cout << "2.-FÍSICA\n";
	printf("3.-MATEMÁTICAS\n");
	cout << "4.-RECREO\n";
	printf("SELECCIONA UNA OPCIÓN: ");
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		printf("SELECCIONASTE QUÍMICA");
		break;
	case 2:
		printf("SELECCIONASTE FÍSICA");
		break;
	case 3:
		printf("SELECCIONASTE MATEMÁTICAS");
		break;
	case 4:
		printf("SELECCIONASTE RECREO");
		break;
	default:
		printf("\a SELECCIONASTE UNA OPCIÓN INVÁLIDA");
	}

	//  "deafult" y "case" siempre llevan ( : )

	return 0;
}