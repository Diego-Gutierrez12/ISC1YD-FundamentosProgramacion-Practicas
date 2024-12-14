#include<windows.h>
#include<iostream>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
    int n,x;
    char opcion;
    n=1;
		opcion='s';
	while(opcion=='s' or opcion=='S')
	{
	
		for(x=3;x<n;x++){
		if(n%x==0)
			break;
		}
	if(x==n)
	cout<<"Sí es primo";
	else
		cout<<"No es primo \n";
		
		cout<<n<<" es un numero primo ";
	    cin>>opcion;
	    n++;    
	}
		return 0;
}
