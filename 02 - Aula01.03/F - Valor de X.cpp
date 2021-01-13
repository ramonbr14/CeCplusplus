#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system ("cls");
	float x,y;
	cout << "\n\n\nEXERCICIO F - O VALOR DE X";
	cout << "\n\n\nDigite um numero  ";
	cin >> x;
	if (x<1)
		y = -3*x+1;
	else // (x>=1)
		y = pow(x,2)+2*x;
		
	cout << "\n\n\nO valor de Y eh:  "<< y;
		
	
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
}
