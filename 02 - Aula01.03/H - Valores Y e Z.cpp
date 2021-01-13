#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	float x, y, z;
	cout << "\n\n\nEXERCICIO H - Y E X pelo valos de X";
	cout << "\n\n\nDigite um Valor:  ";
	cin >> x;
	if(x<-2||x>2){
		y = pow(x,2)-1;
		z = 2*x;
	}
	else
		{
		y = (x/sin(30));
		z = x;
}
	cout << "\n\n\nO VALOR DE Y eh... "<<y;
	cout << "\n\n\nO Valor de Z eh... "<<z;
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
