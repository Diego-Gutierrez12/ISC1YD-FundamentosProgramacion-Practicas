// Luis Diego Gutiérrez Pérez - Número de control: 24041179

Proceso operacion_de_comisiones_2
	Definir sueldo,venta,tc,total Como Real;
	tc<-0;
	Escribir "dame el sueldo ";
	Leer sueldo;
	Escribir "dame la venta 1 ";
	Leer venta;
	tc<-tc+venta*0.10;
	Escribir "dame la venta 2 ";
	Leer venta;
	tc<-tc+venta*0.10;
	Escribir "dame la venta 3 ";
	Leer venta;
	tc<-tc+venta*0.10;
	total<-sueldo+tc;
	Escribir "el total de comisiones es de ",tc;
	Escribir "el sueldo  total es de ",total;
	
FinProceso
