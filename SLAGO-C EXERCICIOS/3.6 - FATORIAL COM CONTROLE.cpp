#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	char L;
	double c,f;
	L = 'S';
	
	cout << "\n\nSLAGO-C EXERCICIO 3.6 - FATORIAL COM CONTROLE";
	
	
	while (L=='s'||L=='S')
		{
			cout << "\n\n\Informe o numero que você quer fatorar.: ";
			cin >> f;
			cout << "\n\n";
			for(c=f;c>1;c--)
						{
							cout << c;
							cout << " x ";
							f = f*c;
		 				}	 
		 
			cout << c;
			cout << " = ";
			cout << f;
			
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
