#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	float V, Vo, a, t;
	cout << "Programa da Velocidade de um movel! - Exercicio 02";
	cout << "\n Digite a velicidade Inicial: ";
	cin >> Vo;
	cout << "\n Digite a acelera��o: ";
	cin >> a;
	cout << "\n Digite o tempo decorrido: ";
	cin >> t;
	V=Vo+a*t;
	cout <<"\n  A velocidade do movel � de: " <<V;
	
	return 0;
}
