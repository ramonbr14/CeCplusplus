#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system ("cls");
	
	double Q, m, c, Tf, Ti;
	cout << "\n\n\nQuestão 02 - Calor de um Corpo!";
	cout << "\n\n\nDigite a massa do corpo: ";
	cin >> m;
	cout << "\n\nDigite o calor especifico medido: ";
	cin >> c;
	cout << "\n\nQual era a temperatura do Corpo: ";
	cin >> Ti;
	cout << "\n\nQual é a temperatura do corpo apos o aquecimento: ";
	cin >> Tf;
	Q = m*c*(Tf - Ti);
	cout << "\n\n\nQ quantidade de Calor é de "<<Q;
	
	cout<< "\n\n\n\n";
	system ("pause");
	return 0;
}
