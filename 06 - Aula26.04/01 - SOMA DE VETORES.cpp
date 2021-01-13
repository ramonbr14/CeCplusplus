#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	char L;
	int A[5], B[5], R[5], c;
	
	L = 'S';
	
	cout << "VETORES E MATRIZES - Exercicio 1 - SOMA DE VETORES";
	while (L=='s'||L=='S')
		{
			for(c=1;c<=5;c++)
				{
					cout << "\n\nDIGITE UM NUMERO: ";
					cin >> A[c];
				}
			for(c=1;c<=5;c++)
				{
					cout << "\n\nDIGITE UM NUMERO: ";
					cin >> B[c];
				}
			for(c=1;c<=5;c++)
				{
					R[c] = A[c]+B[c];
				}
			cout << "\n\nO Vetor resultante é ";
			for (c=1;c<=5;c++)
				{
					cout << " "<<R[c];
				}
			cout << "\n\nDeseja Repetir? ";
			cin >> L;	
	 	} 
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
