#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system ("cls");
	
	float a, b, c, D, x1, x2;
	cout << "\n\nEXERCICIO D - RAIZES DA EQUACAO DE SEGUNDO GRAU";
	cout << "\n\nDigite o numero que acompanha o x ao quadrado: ";
	cin >> a;
	cout << "\n\nDigite o numero que acompanha o x: ";
	cin >> b;
	cout << "\n\nDigite o numero sem x: ";
	cin >> c;
	D = (pow(b,2))-4*a*c;
	if(D>=0)
		{
			x1 = ((-b)+(sqrt(D)))/(2*a);
			x2 = ((-b)-(sqrt(D)))/(2*a);
			cout << "\n\nAs raizes são: "<<x1;
			cout << " e "<<x2;			
		}
	else
	 	cout << "\n\nNão existem raizes para essa equação";
	
	cout << "\n\n\n\n";	 
	system ("pause");
	return 0; 	
		
}
