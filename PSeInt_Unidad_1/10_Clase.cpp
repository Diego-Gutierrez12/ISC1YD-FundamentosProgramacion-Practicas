// Luis Diego Gutiérrez Pérez - Número de control: 24041179

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main() {
    int entera;
    float flotante;
    char letra, palabra[50]; // declara var char y arreglo char

    cout << "Lectura de datos usando scanf\n";
    cout << "Dame un valor entero: ";
    fflush(stdin);
    scanf("%d", &entera);

    cout << "Dame un valor flotante: ";
    fflush(stdin);
    scanf("%f", &flotante);

    cout << "Dame un valor tipo char: ";
    fflush(stdin);
    scanf("%c", &letra);

    cout << "Dame una cadena sin espacios: ";
    fflush(stdin);
    scanf("%s", palabra); // sin espacios

    puts("Impresión de los valores\n");
    cout << entera << "\n";
    cout << flotante << "\n";
    putchar(letra);
    putchar('\n');

    cout << fixed;
    cout.precision(4);
    cout << "Impresión con precisión. El valor flotante a 4 decimales: " << flotante;

    return 0;
}