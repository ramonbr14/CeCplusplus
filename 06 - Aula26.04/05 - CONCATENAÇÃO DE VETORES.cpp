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
	char A[5], B[5], C[10];
	int i, c;
	L = 'S';
	
	cout << "VETORES E MATRIZES - Exercicio 05 - CONCATENAÇÃO DE VETORES";
	while (L=='S')
		{
			cout << "\n Digite 5 letras: ";
			gets(A);
			cout << "\n Digite 5 letras, de novo: ";
			gets(B);
			c = 0;
			for(i=0;i<5;i++)
						{
							
							C[i] = A[c];
							c++;
						}
			c = 0;
			for(i=5;i<10;i++)
						{
							C[i] = B[c];
							c++;
						}
			cout << "Contatenacao: ";
			for(i=0;i<10;i++)
						cout << C[i];
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
