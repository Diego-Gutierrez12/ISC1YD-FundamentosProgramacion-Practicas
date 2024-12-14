#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
void gotoxy(int x,int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip=123;
	int intento=0;
	cout<<"Teclea tu NIP: ";
	cin>>intento;
	if(intento==nip)  //(==) Esto es para comparación
	{
		printf("**CORRECTO**");
	}
	else
	{
		cout<<"**INCORRECTO**";
	}
	return 0;
	
}