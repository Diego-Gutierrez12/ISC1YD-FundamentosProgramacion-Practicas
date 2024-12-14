#include <math.h>
#include <iostream>
using namespace std;
int  main()
{
	float exponente,numero,resultado;
	cout<<"Dime el valor del numero: ";
	cin>>numero;
	cout<<"Dime el valor del exponente: ";
	cin>>exponente;
	
	if (exponente==0)
	   resultado=1;
    else
       if(exponente>0)
          resultado=pow(numero,exponente);
        else
          resultado=1/pow(numero,abs(exponente));
    printf("el resultado es de: %5.5f ",resultado);
    cout<<"el resultado es"<<resultado;
	
	
	
	
	
	return 0;
}