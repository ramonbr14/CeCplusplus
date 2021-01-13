#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main (){
	system ("cls");
	
	float KP, Consumido, Abastecido, Distancia;
	cout << "\n\n\nSLAGO-C -  EXERCICIO 1.4 - CONSUMO DE COMBUSTIVEL";
	cout << "\n\n\nInforme a distancia percorrida: ";
	cin >> Distancia;
//	cout << "\n\n\n\nInforme o quando você abasteceu: ";
//	cin >> Abastecido;
	cout << "\n\n\nQuantos Litros foram consumidos: ";
	cin >> Consumido;
	KP = Consumido/Distancia;
	cout << "\n\nO consumo de "<<KP;
	cout << "L/km";
	
	cout << "\n\n\n\n";
	
	system ("pause");
	return 0;
}
