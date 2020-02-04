// GenerarParejasMCD.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Capitulo 2 Ejercicio 15

#include "pch.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	srand(time(NULL)); 
	num1 = 1 + rand() % (101 - 1);
	num2 = 1 + rand() % (101 - 1);
	cout << "Numero 1 generado: ";
	cout << num1 << endl;
	cout << "Numero 2 generado: ";
	cout << num2;
	int numeros[] = {num1, num2};
	int i, num, mcd, r;

	for (int i = 0; i < 2; i++) 
	{		
		do {
			num = numeros[i];
		} while (num < 0);
		if (i == 0) {
			mcd = num;
		}
		do {
			r = mcd % num;
			mcd = num;
			num = r;
		} while (r != 0);
	}
	cout << "\nEl MCD es :" << mcd;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
