// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float minutos,horas,residuo,minutos2;
	cout<<"Dame la cantidad de minutos a convertir: ";
	cin>>minutos;
	horas=trunc(minutos/60);
	residuo=(minutos/60)-trunc(minutos/60);
	minutos2=residuo*60;
	cout<<minutos<<" minutos equivale a "<<horas<<":"<<minutos2<<"\n";
	printf("%2.0f minutos equivale a %02.0f, %02.0f",horas,minutos2);
	
	
	
	
	
	
	return 0;
}