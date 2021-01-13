#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	char L;
	float P, C, V;
	V = 2.54;
	L = 'S';
	
	cout << "\n\nSLAGO-C EXERCICIO 3.4 - TABELA DE CONVERSÃO POLEGADAS X CENTIMETROS";
	while (L=='s'||L=='S')
		{
			cout << "\n\n\nPOLEGADA   |    CENTRIMETROS";
			for(P=0;P<=10;P+=0.5
			)
					{
						cout << "\n"<<P;
						C = P*V;
						cout << "          =          "<<C;
					}	  
			cout << "\n\nDeseja Repetir? ";
			cin >> L;	
	 	} 
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}


