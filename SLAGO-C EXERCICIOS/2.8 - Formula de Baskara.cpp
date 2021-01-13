#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	float A, B, C, D, x1, x2;
	char R;
	R = 'S';
	
	cout << "\n\nSLAGO-C - EXERCICIOS 2.8 - Formula de Baskara";
	while(R=='s'||R=='S')
		{
			cout << "\n\nDigite o valor de A: ";
			cin >> A;
			cout << "\n\nDigite o valor de B: ";
			cin >> B;
			cout << "\n\nDigite o valor de C: ";
			cin >> C;
			D = (pow(B,2))-4*A*C;
			if(D>=0)
					{
						x1 = ((-B)+(sqrt(D)))/(2*A);
						x2 = ((-B)-(sqrt(D)))/(2*A);
						cout << "\n\nAs raizes são: "<<x1;
						cout << " e "<<x2;
					}
			else
				cout << "\n\nNão existem raizes possiveis.";
			cout << "\n\n\nDeseja continuar? (S ou N)";
			cin >> R;
		}
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
