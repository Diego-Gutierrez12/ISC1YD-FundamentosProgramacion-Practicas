// Luis Diego Gutiérrez Pérez - Número de control: 24041179

Proceso Calificacion
	Definir calif1,calif2,calif3,exam,trabajo Como Entero;
	Definir promedio, final Como Real;
	Escribir "dame la calificacion 1 ";
	Leer calif1;
	Escribir "dame la calificacion 2 ";
	Leer calif2;
	Escribir "dame la calificacion 3 ";
	Leer calif3;
	Escribir "dame el resultado de el examen ";
	Leer exam;
	Escribir "dame el resultado de el trabajo final ";
	Leer trabajo;
	promedio<-(calif1+calif2+calif3)/3;
	Escribir "este es el promedio de tus 3 calificaciones ",promedio;
	final<-(promedio*.55)+(exam*.3)+(trabajo*.15);
	Escribir "tu calificacion final es de ",final;	
	
FinProceso
