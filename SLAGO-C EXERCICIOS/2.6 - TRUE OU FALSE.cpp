#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	char R;
	float N;
	R = 'S';
	cout << "SLAGO-C EXERCICIO 2.6 - TRUE OU FALSE";	
	while(R=='s'||R=='S')
		{
			cout << "\n\nDigite um numero: ";
			cin >> N;
			
			if (N==0)
				cout << "\n\"FALSE\"";
			else
				cout << "\n\"TRUE\"";
				
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
