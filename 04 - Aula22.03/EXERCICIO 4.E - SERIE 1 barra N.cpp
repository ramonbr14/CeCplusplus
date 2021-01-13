#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");

	float R, C, N;
	
	R=1;
	C=1;
	
	cout << "\n\nEXERCICIO 4.E - SERIE 1/N";
	cout << "\n\nDigite um numero: ";
	cin >> N;
	while(N<=0)
		{
			cout << "\n\no Numero precisa ser Maior que zero! Digite Novamente: ";
			cin >> N;	
		}
	cout << "\n\nA Serie e: " ;
	cout << "\n\n 1";
	while(C<N)
		{
			C = C+1;
			R = R +(1/C);
			cout << " + 1/"<<C;	
		}
	cout << " = "<<R;	
	
	
	cout << "\n\n\nFIM DO PROGRAMA - TENHA UM BOM DIA";
	
	
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
