#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	
	float N1, N2;
	cout << "\n\nSLAGO-C - EXERCICIO 2.2 - O MAIOR DE DOIS";
	cout << "\n\nDigite um numero: ";
	cin >> N1;
	cout << "\n\nDigite um outro numero: ";
	cin >> N2;
	if(N1==N2)
		cout << "\n\n\nOs dois numeros sao identicos.";
	else
		{
			if(N1>N2)
				cout << "\n\nO MAIOR NUMERO E: "<<N1;
			else
				cout << "\n\nO MAIOR NUMERO E: "<<N2;
		}
			
	cout << "\n\nTENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
