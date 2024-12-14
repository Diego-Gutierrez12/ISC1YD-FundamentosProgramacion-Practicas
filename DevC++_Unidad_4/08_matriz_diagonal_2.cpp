// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <windows.h>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int matriz[10][10], diags[2][10];
	int i, j, n, tempo;
	srand(time(0));
	do
	{
		cout << "Dime cuantos elementos quieres ordenar? <2-10>";
		cin >> n;
	} while (n > 10 or n < 2);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			matriz[i][j] = rand() % 100;
	cout << "Impresión de la matriz\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%3d", matriz[i][j]);
		cout << "\n";
	}
	cout << "\nobtención de la diagonal\n";
	for (i = 0; i < n; i++)
	{
		diags[0][i] = matriz[i][i];
		printf("%3d", diags[0][i]);
	}
	cout << "\nobtención Diagonal Inversa\n";
	j = 0;
	for (i = n - 1; i >= 0; i--)
	{
		diags[1][j] = matriz[j][i];
		printf("%3d", diags[1][j]);
		j++;
	}
	cout << "\nImpresión de la diagonal\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				printf("%3d", matriz[i][j]);
			else
				printf("  ");
		}
		cout << "\n";
	}

	return 0;
}