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
	char nome[20];
	int idade = 0;
	L = 'S';
	
	while (L=='S')
		{
			cout << "Qual seu Nome?\n";
			cin >> nome;
			cout << "Qual sua idade?\n";
			cin >> idade;
			
			cout << "O PLANETA SE CHAMA ";
			cout << nome;
			cout << "SUA IDADE É DE ";
			cout << idade;
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
