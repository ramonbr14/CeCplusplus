
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	
	float C, N, P, Fd;
	cout << "\n\nEXERCICIO 4.2.C - ARRANJO SIMPLES";
	cout << "\n\nINSIRA UM NUMERO: ";
	cin >> N;
	cout << "\n\nINSIRA OUTRO NUMERO: ";
	cin >> P;
	C = N-1;
	Fd = abs(N-P);
	do
		{
			N = N * C;
			C = C-1;
		}
	while(C>Fd);
	cout << "\n\nO resultado do Arranjo simples e: "<<N;
	
	cout << "\n\nTENHA UM BOM DIA"; 
	
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
