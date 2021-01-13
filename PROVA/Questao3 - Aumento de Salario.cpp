#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system ("cls");
	
	float salario;
	
	cout << "\n\n\nQuestão 03 - Aumento de Salario!";
	cout << "\n\n\nInforme o Salario: ";
	cin >> salario;
	if (salario<=880)
		{
			salario = salario + ((salario*10)/100);
			salario = salario + 100; 
		}
	else
		salario = salario + ((salario*10)/100);
		
	
	cout << "\n\n\n\nO salario passara a ser: R$ "<<salario;
	cout << "\n\n\n\n";
	
	system ("pause");
	return 0;
}
