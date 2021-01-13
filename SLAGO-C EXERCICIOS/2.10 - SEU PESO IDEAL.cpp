#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	char R, Sx;
	float Alt;
	R = 'S';
	
	cout << "\n\nSLAGO-C EXERCICIO 2.10 - SEU PESO IDEAL";	
	while(R=='s'||R=='S')
		{
			cout << "\n\nQual seu sexo? (DIGITE M PARA HOMEM E F PARA MULHER.)";
			cin >> Sx;
			cout << "\n\nInforme sua altura: ";
			cin >> Alt;
			switch(Sx)
				{
					case 'M': Alt = 72.7*Alt-58;
						cout << "\n\nSeu peso ideal deve ser de: "<< Alt; break;
					case 'F': 
						Alt = 62.1*Alt-44,7;
						cout << "\n\nSeu peso ideal deve ser de: "<< Alt; break;
					defaut: 
						cout << "Letra incorreta."; // ele não esta entrando no deflaut
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
