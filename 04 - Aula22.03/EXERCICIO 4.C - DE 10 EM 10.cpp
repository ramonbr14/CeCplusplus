#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	
	float I,S;
	cout << "\n\n\nEXERCICIO 4.C - DE 10 EM 10";
	cout << "\n\nInforme o Inicio da serie: ";
	cin >> I;
	cout << "\n\nInforme o Fim da Serie: ";
	cin >> S;
	while (I<=S)
		{
			cout <<" "<<I;
			I = I+10;
		}
	
	
	
	cout << "\n\n\nFIM DO PROGRAMA - TENHA UM BOM DIA";
	
	
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
