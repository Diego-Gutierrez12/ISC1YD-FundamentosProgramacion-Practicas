// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int m1[10][10], m2[10][10], m3[10][10];
	int v1[10], v2[10], v3[10];
	int i, j, n;
	srand(time(0));
	do
	{
		cout << "Cuantos elementos por lado tienen matriz y vector? <2-10>";
		cin >> n;
	} while (n > 10 or n < 2);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			m1[i][j] = rand() % 10;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "Dame el valor de m2[" << i << "] [" << j << "]: ";
			cin >> m2[i][j];
		}

	cout << "Matriz 1\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("[%2d]", m1[i][j]);
		}
		printf("\n");
	}

	cout << "Matriz 2\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("[%2d]", m2[i][j]);
		}
		printf("\n");
	}
	cout << "Matriz 3\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			m3[i][j] = m1[i][j] + m2[i][j];
			printf("[%2d]", m3[i][j]);
		}
		printf("\n");
	}
	system("PAUSE");
	system("CLS");

	cout << "v1 v2 v3\n";
	for (i = 0; i < n; i++)
	{
		v1[i] = rand() % 10;
		v2[i] = rand() % 10;
		v3[i] = v1[i] + v2[i];
		printf("%2d+%2d=%2d\n", v1[i], v2[i], v3[i]);
	}

	return 0;
}