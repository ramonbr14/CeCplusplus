#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	
	float N, C;
	char L;
	C=1;
	cout << "\n\nEXERCICIO 4.I - PET REPET";
	cout << "\n\nDigite uma letra ou caracter: ";
	cin >> L;
	cout << "\n\nQuantas vezes voce quer que seja repetida: ";
	cin >> N;
	while(C<=N)
		{
			cout << " "<<L;
			C = C+1;
		}
	
	
	
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
