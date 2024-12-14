#include <iostream>
#include <windows.h>
using namespace std;
int main (){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, n;
	
	n=20;
	for(x=3;x<20;x++)
	{
		cout<<n<<"X"<<x<<"="<<n%x==0<<"\n";
		
	/*
	}
	for(x=1;x<11;x++)
	{
		printf("%2d X %2d = %3d\n",tabla,x,tabla*x); 
	}
*/
	
	
	
	
	
	
	return 0;
}