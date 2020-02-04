// MCM5numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Capitulo 2 Ejercicio 19

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n1 = 5, n2 = 10, n3 = 15, n4 = 20, n5 = 25;
	int maximo, i;
	int numeros[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Ingrese un numero ";
		cin >> numeros[i];
	}
	n1 = numeros[0];
	n2 = numeros[1];
	n3 = numeros[2];
	n4 = numeros[3];
	n5 = numeros[4];

	maximo = n1;

	if (n2 > maximo)
		maximo = n2;

	if (n3 > maximo)
		maximo = n3;
	if (n4 > maximo)
		maximo = n4;
	if (n5 > maximo)
		maximo = n5;

	i = maximo;
	while ((i % n1 != 0) || (i % n2 != 0) || (i % n3 != 0) || (i % n4 != 0) || (i % n5 != 0))
		i++;
	cout << "\nEl MCM es: ";
	cout << i << endl;
}
