#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int main (){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int numero;
	int x;
	int result;
	do{
		cout<<"Digite un numero para su multiplicacion";
		cin>>numero;
			
	}while((numero<1) or (numero>10));
  
		for(x=1;x<=10;x++)
		{
		result=(x*numero);
		cout<<x<<" X "<<numero<<" = "<<result<<"\n";
		
		}
		

	 
	
	
	
	
	return 0;
}