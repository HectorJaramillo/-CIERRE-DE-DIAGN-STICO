// MCD3Numeros.cpp : 
//Capitulo 2 ejercicio 16
#include "pch.h"
#include<iostream>
using namespace std;
int main() {
	int i, num, mcd, r;

	for (int i = 0; i < 3; i++) {
		do {
			cout << "Ingrese numero " << i + 1 << " : " << endl;
			cin >> num;
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
	cout << "El MCD es :" << mcd;
	return 0;
}
