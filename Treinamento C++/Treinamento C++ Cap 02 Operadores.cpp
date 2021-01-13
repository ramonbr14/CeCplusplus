#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <cstdlib>
#include <locale>
#include <string>
#include <math.h>
#include <ctype.h>
#include <Windows.h>
#include "Treinamento C++ Cap 02 Operadores - funcoes.h"



int main (){
	setlocale(LC_ALL,"Portuguese");
	system("cls");
	char L;
	int op1;
	L = 'S';
	
	while (L=='S')
		{
			gotoxy(20,1);
			cout << "ESCOLHA A OPERAÇÃO";
			gotoxy(20,2);
			cout << "1 - MEDIAS DAS NOTAS";
			gotoxy(20,3);
			cout << "2 - ";
			gotoxy(20,20);
			cin>> op1;
			system("cls");
			switch(op1){
				case 1: mediaNotas();break;
			} 	
	
	gotoxy(1,10);
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
