// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int matriz[5][5];
	int i, j;
	srand(time(0));
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			// cout<<"Dame el valor del renglon"<<i<<"
			matriz[i][j] = rand() % 100;
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%3d", matriz[i][j]);
		// cout<<matriz[i][j]<<" ";
		cout << "\n";
	}

	return 0;
}