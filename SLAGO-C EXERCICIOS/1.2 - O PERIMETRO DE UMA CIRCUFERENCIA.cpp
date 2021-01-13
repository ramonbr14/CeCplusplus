#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>


using namespace std;

int main () {
	system ("cls");
	
	float PI, R, P;
	PI = 3.1415;
	cout << "\n\nSLAGO-C EXERCICIO 1.2 - O PERIMETRO DE UMA CIRCUFERENCIA";
	cout << "\n\nMe diga qual o raio da circunferencia desejada: ";
	cin >> R;
	P = 2*PI*R;
	cout << "\n\nO Perimetro dessa circunferencia é: "<<P;
	
	cout << "\n\n\n\n";
	
	system ("pause");
	return 0;
	
}
