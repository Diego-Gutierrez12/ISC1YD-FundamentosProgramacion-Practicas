// Luis Diego Gutiérrez Pérez - Número de control: 24041179
#include <iostream> //system
#include <stdio.h>
#include <windows.h>
using namespace std;
main()
{
	SetConsoleOutputCP(CP_UTF8); // controlar salida
	SetConsoleCP(CP_UTF8);		 // controlar entrada
	char c;
	char letras[20] = "hexadecimal";
	int i;
	float f; /*
	 i=10;
	 f=123.45;
	 c='x';
	 printf("impresión simple\n");
	 printf("varchar=%c,\n varint=%d,\n varfloat=%f,\n cadena=%s\n",c,i,f,letras);
	 system("pause\n");
	 printf("impresión sin espacios\n");
	 printf("%d%f%c%s\n",i,f,c,letras);
	 printf("impresion con etiquetas\n");
	 printf("entero:%d flotante:%f carácter:%c cadena:%s\n",i,f,c,letras);
	 system("pause");
	 printf("dame un entero: ");
	 fflush(stdin);
	 scanf("%d",&i);
	 printf("dame un flotante: ");
	 fflush(stdin);
	 scanf("%f",&f);
	 cout<<"dame un caracter: ";
	 fflush(stdin);
	 cin>>c;
	 printf("dame una cadena: ");
	 fflush(stdin);
	 scanf("%s",&letras);*/
i:
	12345;
f:
	345.678;
	printf("probando diferentes anchos en enteros: 3, 5 y 8 espacios ");
	printf("%3d %5d %8d\n", i, i, i);

	return 0;
}