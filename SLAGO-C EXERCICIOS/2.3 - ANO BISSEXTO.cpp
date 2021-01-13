#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system ("cls");
	
	float ANO;
	char R;
	R = 'S';
	cout << "\n\n\nSLAGO-C EXERCICIO 2.3 - ANO BISSEXTO";
	do
		{
			cout << "\n\nInforme o ano(se for A.C escreva como se fosse negativo: ";
			cin >> ANO;
			if((abs(ANO)%4==0)&&((abs(ANO)%100)!=0))
			{
				cout << "\n\nO ANO "<<ANO;
				cout << " FOI UM ANO BISSEXTO";
			}
			else
			{
				cout << "\n\nO ANO "<<ANO;
				cout << " NAO FOI UM ANO BISSEXTO";	
			}
		cout << "\n\nDESEJA REPETIR? (S PARA SIM E N PARA NÃO): ";
		cin >> R; 
		}
	while(R=='s'||R=='S');
		
	cout << "\n\nTENHA UM BOM DIA";
	
	cout << "\n\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}

