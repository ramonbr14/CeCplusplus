#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	char R;
	float T, C, E; 
	R = 'S';
	E = 0;
	
	cout << "SLAGO-C EXERCICIO 2.5 - CONTABILIZANDO OS ERROS";
	while(R=='s'||R=='S')
		{
			cout << "\n\nDigite o total: ";
			cin >> T;
			cout << "\n\n\nDigite quantos acertos: ";
			cin >> C;
			E = abs(T-C);
			if(E<=1)
				{	
					cout << "\n\nApenas "<<E;
					cout << " erro foi detectado";
				}
			else
				{
					cout << "\n\nApenas "<<E;
					cout << " erros foram detectados!";
			  	}
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
