// Luis Diego Gutiérrez Pérez - Número de control: 24041179

Proceso problema_de_comisiones
	Definir sueldo,venta1,venta2,venta3,com1,com2,com3,tcomisiones,total Como Real;
	Escribir "dame la venta 1 ";
	Leer venta1;
	Escribir "dame la venta 2 ";
	Leer venta2;
	Escribir "dame la venta 3 ";
	Leer venta3;
	Escribir " �cuanto es el sueldo? ";
	Leer sueldo;
	com1<-venta1*0.10;
	com2<-venta2*0.10;
	com3<-venta3*0.10;
	tcomisiones<-com1+com2+com3;
	total<-tcomisiones+sueldo;
	Escribir "tu comision 1 es de ",com1;
	Escribir "tu comision 2 es de ",com2;
	Escribir "tu comision 3 es de ",com3;
	Escribir "tus comisiones totales son de ",tcomisiones;
	Escribir "tu sueldo total es de ",total;
	
FinProceso
