#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	
	float N, R, P;
	int S, C;
	C = 1;
	R = 1;
	cout << "\n\nEXERCICIO 4.F - SERIE MAIS E MENOS 1 BARRA N";
	cout << "\n\n\nInforme um numero: ";
	cin >> N;
	while (N<=0)
		{
			cout << "\n\n\nNão pode ser um numero Menor que zero. Digite Outro: ";
			cin >> N;
		}
	cout << "\n\n\nA serie é: 1 ";
	while (C<N)
		{
			C = C + 1;
			S = (C % 2);
			P = pow (C,2);
			if (S==0)
				{
					R = R - (1/P);
					cout << " - 1/"<<P;
				}
			else
				{
					R = R + (1/P);
					cout << " + 1/"<<P;
				}
		}
		cout << " = "<<R;
		
		 
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
