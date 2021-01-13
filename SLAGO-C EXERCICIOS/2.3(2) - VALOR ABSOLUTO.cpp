#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	
	float N;
	char R;
	R = 'S';
	cout << "\n\nSLAGO-C EXERCICIOS 2.3(2) - VALOR ABSOLUTO";
	
	while(R=='s'||R=='S')
		{
			cout << "\n\nDigite um numero negativo: ";
			cin >> N;
			N = abs(N);
			cout << "\n\no VALOR ABSOLUTO E: "<<N;
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
