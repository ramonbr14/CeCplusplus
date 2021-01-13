#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

using namespace std;
int main (){
	system("cls");
	char L;
	char A[12], B[12];
	int i, c;
	L = 'S';
	
	cout << "VETORES E MATRIZES - Exercicio 06 - INVERSÃO DE VETORES";
	while (L=='S')
		{
			c=11;
			cout << "\n Digite uma palavra de ate 12 caracteres (O espaço conta):  ";
			gets(A);
			for(i=0;i<12;i++)
						{
							B[c]=A[i];
							c--;
						}
			cout << "\n\n as letras invertidas ficam: ";
			for(i=0;i<12;i++)
						cout << " "<< B[i];
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
