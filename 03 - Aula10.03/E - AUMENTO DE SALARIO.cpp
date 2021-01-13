#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	
	float salario, aumento;
	cout << "\n\nEXERCICIO E - AUMENTO DE SALARIO";
	cout << "\n\nInforme o Salario do funcionario: ";
	cin >> salario;
	if(salario<700)
		aumento = (salario*15)/100;
	else	
		{
			if(salario<=1200)
				aumento = (salario*10)/100;
			else
				aumento = (salario*5)/100;
		}
	salario = salario + aumento;
	cout << "\n\nO Aumento foi de R$ "<<aumento;
	cout << "\n\nO Salario passa a ser R$ "<<salario;
	
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
	
}
