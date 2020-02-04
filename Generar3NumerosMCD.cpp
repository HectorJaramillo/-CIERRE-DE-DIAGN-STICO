//Generar3NumerosMCD
//Capitulo 2 Ejercicio 17
#include "pch.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	srand(time(NULL));
	num1 = 1 + rand() % (101 - 1);
	num2 = 1 + rand() % (101 - 1);
	num3 = 1 + rand() % (101 - 1);
	cout << "Numero 1 generado: ";
	cout << num1 << endl;
	cout << "Numero 2 generado: ";
	cout << num2;
	cout << "\nNumero 3 generado: ";
	cout << num3;
	int numeros[] = { num1, num2, num3};
	int i, num, mcd, r;

	for (int i = 0; i < 3; i++)
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
