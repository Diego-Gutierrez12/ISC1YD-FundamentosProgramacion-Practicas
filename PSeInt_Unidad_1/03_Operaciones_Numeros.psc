// Luis Diego Gutiérrez Pérez - Número de control: 24041179

Proceso operaciones_con_numeros
	//definiciones 
	Definir num1, num2 Como entero;
	Definir result Como Real;
	
	Escribir "dime el numero 1 ";
	Leer num1;
	
	Escribir "dime el numero 2 (evita el cero) ";
	Leer num2;
	
	result<-num1+num2;
	Escribir "la suma de ",num1,"+",num2,"=",result;
	
	result<-num1-num2;
	Escribir "la resta de ",num1,"-",num2,"=",result;
	
	result<-num1*num2;
	Escribir "la multiplicacion de ",num1,"x",num2,"=",result;
	
	result<-num1/num2;
	Escribir "la division de ",num1,"/",num2,"=",result;
	
FinProceso
