// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x = 1;
	string clave;
	for (; x < 5; x++)
	{
		printf("Dame tu pasword (intento #%d) ", x);
		getline(cin, clave);
		if (clave == "soloyolose")
			break;
	}
	if (x == 5)
		puts("\ausuario no autorizado");
	else
		printf("Bienvenido al intento #%d ", x);

	return 0;
}