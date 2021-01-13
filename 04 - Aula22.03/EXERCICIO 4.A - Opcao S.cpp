#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	
	float x, y;
	char opcao;
	opcao = 's';
	cout << "\n\nEXERCICIO 4.A - Opcao S";
	while ((opcao=='S')||(opcao=='s'))
		{
			cout << "\n\n\nPor Favor digite um número: ";
			cin >> x;
			if(x>=0)
				y = 2*x;
			else
				y= -x+2;
			cout << "\n\n\n\nO Valor de Y e: "<<y;
			cout << "\n\nDeseja Continuar ? Escreva S ou N: ";
			cin >> opcao;
		}
		
	cout << "\n\n\nFIM DO PROGRAMA - TENHA UM BOM DIA";
	
	
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
