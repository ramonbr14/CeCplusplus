#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	
	float N, F, A1, A2, C;
	
	A1 = 0;
	A2 = 1;
	C = 1;	
	cout << "\n\nEXERCICIO 4.2.B - FIBONACCI";
	cout << "\n\n\nGarota companheira por favor informe quantos termos você quer pra sequencia: ";
	cin  >> N;
	cout << "\n\nA sequencia de fibonacci é: (1";
	if (N>1)
		{
		do
			{
				F = A1 + A2;
				cout << ", "<<F;
				A1 = A2;
				A2 = F;
				C = C+1;
			}
		while(C<N);
		cout << ")";
		}
	else
		cout << ")";
	cout << "\n\nTENHA UM BOM DIA!";	                                                                     
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
