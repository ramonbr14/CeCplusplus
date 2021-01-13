#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	
	double c,f;
	cout << "EXERCICIO 4.D - FATORIAL";
	cout << "\n\n\Informe o numero que você quer fatorar.: ";
	cin >> f;
	c = f;
	cout << "\n\n";
	while(c>1)
		{
			cout << c;
			cout << " x ";
			c = c-1;
			f = f*c;
		 } 
		 
	cout << c;
	cout << " = ";
	cout << f;
		
	cout << "\n\n\nFIM DO PROGRAMA - TENHA UM BOM DIA";
	
	
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
