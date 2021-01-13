#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main (){
	system ("cls");
	double K, Q1, Q2, d, Fel;
	cout << "Exercicio 06 - força eletrica a distancia!";
	cout << "\n Começe me dando o valor da constante: ";
	cin >> K;
	cout << "\n Agora Informa o valor da primeira carga eletrica: ";
	cin >> Q1;
	cout << "\n O valor da Segunda carga eletrica: ";
	cin >> Q2;
	cout << "\n Me diga a distancia entre as cargas: ";
	cin >> d;
	Fel = K * ((abs(Q1)*abs(Q2))/pow(d,2));
	cout << "A Força eletrica entre as cargas é de: " << Fel;
	system ("pause");
	return 0;
}
