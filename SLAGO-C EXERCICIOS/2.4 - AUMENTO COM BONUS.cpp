#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	char R;
	float salario;
	R = 'S';
	
	cout << "\n\nSLAGO-C EXERCICIO 2.4 - AUMENTO COM BONUS";
	while(R=='s'||R=='S')
		{
			cout << "\n\n\nInforme o Salario: ";
			cin >> salario;
			if (salario<=750)
				{
					salario = salario + (salario*0.05);
					salario = salario + 100; 
				}
			else
				salario = salario + (salario*0.05);
		
			cout << "\n\n\n\nO salario passara a ser: R$ "<<salario;
			cout << "\n\n\nDeseja continuar? (S ou N)";
			cin >> R;
		}
	
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
