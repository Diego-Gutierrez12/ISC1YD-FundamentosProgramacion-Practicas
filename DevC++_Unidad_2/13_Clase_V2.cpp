// Luis Diego Gutiérrez Pérez - Número de control: 24041179

#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int main (){
	SetConsoleOutputCP(CP_UTF8);
	char cad [80];
	int i,j,k;
	puts("Usando scanf con juegos de inspección\n");
	puts("Dame una cadena con espacios");
	scanf("%s",cad);
	cout<<cad<<"\n";
	fflush(stdin);
	puts("dame una cadena de mayuscúlas y espacios");
	scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]",cad);
	puts(cad);
	puts("Dame una cadena de mayúsculas, minúsculas y espacios\n");
	fflush(stdin);
	scanf("%[a-zA-Z]",cad);
	cout<<cad<<"\n";
	puts("Dame una cadena con cualquier caracter y termina con enter");
	fflush(stdin);
	scanf("%[^\n]",cad);
	puts(cad);
	
	
	
	return 0;
}

