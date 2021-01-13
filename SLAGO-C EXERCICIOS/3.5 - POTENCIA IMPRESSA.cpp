#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	char L;
	double b,p,c,R;
	L = 'S';
	
	cout << "\n\nSLAGO-C EXERCICIO 3.5 - Potencia Impressa";
	
	
	while (L=='s'||L=='S')
		{
			cout << "\n\n\Informe a base: ";
			cin >> b;
			cout << "\n\n\Informe a potencia: ";
			cin >> p;
			cout << "\n\n\n "<<b <<"^" <<p << " = ";
			R = b;
			for(c=1;c<p;c++)
							R = R*b;
			cout << R;
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
