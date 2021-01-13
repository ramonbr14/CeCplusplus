//MAIN_LISTADE
#include "ListaDE.c"
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
	int n;
	L = 'S';
	ListaE* l;
	l = inicioL();
	while  (L=='S')
		{
			n = menu();
			switch(n){
				case 1: 
					colherNUM();
					l = inslista(l, c);
					break;
				case 2:
					consultar(l);
					break;
				case 3:
					implista(l);
					break;
				case 4: 
					colherNUM();
					l = exclista(l, c);
					break;
				default: cout << "OPÇÃO INVALIDA";
					break;
			}
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
