#include <math.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int hora_salida,min_salida,seg_salida,seg_inicial,seg_final;
	int seg_viaje,hora_llegada,min_llegada,seg_llegada;
	cout<<"dime la hora de salida: ";
	cin>>hora_salida;
	cout<<"dime los minutos de salida: ";
	cin>>min_salida;
	cout<<"dime los segundos de salida: ";
	cin>>seg_salida;
	cout<<"dime  el tiempo que dura el viaje en segundos: ";
	cin>>seg_viaje;
	seg_inicial=hora_salida*3600+min_salida*60+seg_salida;
	seg_final=seg_inicial+seg_viaje;
	hora_llegada=trunc(seg_final/3600);
	min_llegada=trunc((seg_final % 3600)/60);
	seg_llegada=(seg_final % 3600) %60;
	
	cout<<"hora de llegada: ";
	cout<<hora_llegada<<":"<<min_llegada<<":"<<seg_llegada<<"\n";
	
	printf("hora de llegada: %02d:%02d:%02d",hora_llegada,min_llegada,seg_llegada);
	
	
	
	return 0;
	
	
	
}
	