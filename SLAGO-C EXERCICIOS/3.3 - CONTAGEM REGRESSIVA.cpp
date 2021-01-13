#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	char L;
	int n,c;
	L = 'S';
	
	cout << "\n\nSLAGO-C EXERCICIO 3.3 - CONTAGEM REGRESSIVA";
	while (L=='s'||L=='S')
		{
			cout << "\n\nInforme um numero: ";
			cin >> n;
			cout<< "\n\n\nCONTAGEM REGRESSIVA";
			for(c=n;c>=0;c--)
				{
					cout << "\n\n "<<c;
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

