#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

//Sabendo que y = sen(x) + x5 - | x2| e z = cos(x) - ex para x >= 0, caso contrário y = | x2| e z = ex.
using namespace std;
int main(){
	system("cls");
	float x, y, z;
	cout << "EXERCICIO I - Valores de Y e Z 02";
	cout << "Digite o Valor de X:   ";
	cin >> x;
	if(x>=0){
		y = sin(x) + pow(x,5) - (|pow(x,2)|);
		z = cos(x) - pow(e,x);
	}
	else{
		y = |pow(x,2)|;
		z = pow(e,x);
	}
	cout << "O valor de Y eh:  "<<y;
	cout << "O valor de z eh:  "<<z;
	
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
