#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	system("cls");
	float Vo, a, S, So;
	double V;
	cout << ("\nExercicio 07 - velocidade final por Distancia percorrida");
	cout << ("\nQual a velocidade Inicial? ");
	cin >> Vo;
	cout << ("\nInforme a aceleração: ");
	cin >> a;
	cout << ("\nInformeto o Espaço percorrido");
	cin >> S;
	cout << ("\nQual foi o espaço inicial?");
	cin >> So;
	V=sqrt(pow(Vo,2)+2*a*(S-So));
	cout << "\nA velocidade final foi de..." <<V;
	
	system("pause");
	return 0; 
}
