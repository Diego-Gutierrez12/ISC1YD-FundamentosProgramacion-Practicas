#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int minutos,horas,minutos2;
	cout<<"Dame la cantidad de minutos a convertir: ";
	cin>>minutos;
	horas=minutos/60;
	minutos2=minutos%60;
	cout<<minutos<<" minutos equivale a "<<horas<<":"<<minutos2<<"\n";
	printf("%02.0d minutos equivale a %02.0d:%02.0d",minutos,horas,minutos2);
	
	//%o.2f (float)
	//%0.2d (entero o int)
	
	return 0;
	
	
	
	
	
	
}