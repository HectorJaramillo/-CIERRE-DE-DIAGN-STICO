// MCDdeParejasdeNumeros.cpp 
//Capitulo 2 Ejercicio 18

#include "pch.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

void MCD(int&, int&);

using namespace std;
int main()
{
	int n1 = 25, n2 = 645;
	int n3 = 132, n4 = 360;
	int n5 = 192, n6 = 24;
	cout << "Pareja 1: 25,645 ";
	MCD(n1, n2);
	cout << "\nPareja 2: 132,360 ";
	MCD(n3, n4);
	cout << "\nPareja 3: 192,24 ";
	MCD(n5, n6);
	return 0;
}
void MCD(int& n1, int& n2)
{
	int numeros[] = { n1,n2 };
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
