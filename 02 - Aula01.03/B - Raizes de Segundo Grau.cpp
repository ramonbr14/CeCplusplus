#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system ("cls");
	float x1, x2, a, b, c, Dt;
	cout << "\n\nExercicio B - Raizes de uma equacao de segundo grau...";
	cout << "\n\nForneça a variavel 'a' ";
	cin >> a;
	cout << "\n\nForneça a variavel 'b'";
	cin >> b;
	cout << "\n\nAgora me diga a variavel 'c'";
	cin >> c;
	Dt = (pow(b,2))-4*a*c;
	if (Dt>=0){
		x1 = ((-b)+(sqrt(Dt))/(2*a));
		x2 = ((-b)-(sqrt(Dt))/(2*a));
		cout << "\n\nA Raiz 1 é "<<x1;
		cout << "\n\nA raiz 2 é "<<x2;
				}
	else
		cout << "\n\nNao existe raiz de numeros negativos!";
	
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}

