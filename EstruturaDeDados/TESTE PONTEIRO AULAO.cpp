#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <locale>

using namespace std;
int main (){
setlocale(LC_ALL,"Portuguese");
	system("cls");
	char L;
	L = 'S';
	int x, *p;
	x = 10;
	p = &x;
	
	while (L=='S')
		{
	        cout << "Endereço da variavel x: " << &x << endl;
            cout << "Valor da variavel x " << x << endl;              		
			cout << "\n\nDeseja Repetir? ";
			cin >> L;
			L = toupper(L);	
	 	} 
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
