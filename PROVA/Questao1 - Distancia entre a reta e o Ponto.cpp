#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;
int main (){
	system ("cls");
	
	float d, a, b, c, x0, y0;
	
	cout << "\n\n\nQuestão 01 da prova!";
	cout << "\n\nFormula da distancia entre um ponto e uma reta! ";
	cout << "\n\nDigite o primeiro Coeficiente: ";
	cin >> a; 
	cout << "\n\nDigite o segundo Coeficiente: ";
	cin >> b;
	cout << "\n\nDigite o terceiro Coeficiente: ";
	cin >> c;
	cout << "\n\nDigite o as coordenadas do Ponto: ";
	cin >> x0;
	cin >> y0;
	d = (abs(a*x0+b*y0+c))/(sqrt(pow(a,2)+pow(b,2)));
	cout << "\n\n\nA distancia entre a reta e o ponto e: "<<d;
	cout << "\n\n\n";
	system ("pause");
	return 0;
}
