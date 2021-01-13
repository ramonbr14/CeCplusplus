#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	
	float C, a, q, N;
	C =1; 
	cout << "\n\nEXERCICIO 4.2.A - PROGRESSÃO GEOMETRICA ";
	cout << "\n\n\nInforme o primeiro termo: ";
	cin >> a;
	cout << "\n\nInforme a Razão: ";
	cin >> q;
	cout << "\n\nAgora Informe quantos termos você quer para a progressão: ";
	cin >> N;
	cout << "\n\n\nA PROGRESSÃO GEOMETRICA E:  P.G ("<<a;
	if(N>1)
		{
			do
				{
					a=a*q;
					cout << ", "<<a;
					C=C+1;
				}
			while(C<N);
		
		cout << ")";
		}
	else
		cout << ")";
	
		
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
