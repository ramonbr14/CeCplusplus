#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	float rt, r1, r2;
	char tipo;
	cout << "\n\n\nEXERCICIO D - RESITORES";
	cout << "\n\n\nOs resitores que você quer calcular";
	cout << "\n\n\nDigite 'S' para Serial, e 'P' para paralelo:  ";
	cin >> tipo;
	if(tipo=='P'||tipo=='p'||tipo=='S'||tipo=='s'){	
		cout << "\n\n\nAgora me diga o valor do primeiro resistor: ";
		cin >> r1;
		cout << "\n\n\nAgora me diga o valor do Segundo resitor: ";
		cin >> r2;
		if(tipo=='p')
			rt = (r1*r2)/(r1+r2);
		else
			rt = r1+r2;
		cout << "\n\n\nO valor Total dos resitores eh: "<<rt;
				}
	else
		cout << "\n\n\nVocê digitou a letra errada";
	
	

	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	
	system ("pause");
	return 0;
}
