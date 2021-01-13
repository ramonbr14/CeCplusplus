#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	char L;
	int t1, t2, R, DIA, MES, ANO;
	L = 'S';
		
	cout << "\n\nSLAGO-C EXERCICIO 2.11 - PERFIL DO USUARIO";
	while(L=='s'||L=='S')
		{
			cout << "\n\nDigite o DIA de nascimento: ";
			cin >> DIA;
			cout << "\n\nDigite o MES de nascimento: ";
			cin >> MES;
			cout << "\n\nDigite o ANO de nascimento: ";
			cin >> ANO;
			t2 = ((DIA*100)+MES)+ANO;
//			cout << "\n\nResultado de T2: "<<t2;
			t1 = (t2/100);
//			cout << "\n\nResultado de T1: "<<t1;
			t2 = t2-(t1*100);
//			cout << "\n\nResultado de T2: "<<t2;
			R = fmod((t1+t2),5);
//			cout << "\n\nResultado de R: "<<R;
			switch(R){
				case 0: cout << "\n\n0 - TIMIDO!";break;
				case 1: cout << "\n\n1 - SONHADOR!";break;
				case 2: cout << "\n\n2 - PAQUERADOR!";break;
				case 3: cout << "\n\n3 - ATRAENTE!";break;
				case 4: cout << "\n\n4 - IRRESISTIVEL!";break;
			}
			
			cout << "\n\n\nDeseja continuar? (S ou N)";
			cin >> L;
		}
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
