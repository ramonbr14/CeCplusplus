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
	cout << ("\nInforme a acelera��o: ");
	cin >> a;
	cout << ("\nInformeto o Espa�o percorrido");
	cin >> S;
	cout << ("\nQual foi o espa�o inicial?");
	cin >> So;
	V=sqrt(pow(Vo,2)+2*a*(S-So));
	cout << "\nA velocidade final foi de..." <<V;
	
	system("pause");
	return 0; 
}
