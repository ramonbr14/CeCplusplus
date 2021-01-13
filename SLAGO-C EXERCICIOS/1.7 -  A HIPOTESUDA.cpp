#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	
	float c1, c2, H;
	cout << "\n\nSLAGO-C EXERCICIO 1.7 -  A HIPOTESUDA";
	cout << "\n\nInforme o valor do Cateto oposto: ";
	cin >> c1;
	cout << "\n\nInforme o valor de um outro Cateto adjacente: ";
	cin >> c2;
	H = sqrt((pow(c1,2))+(pow(c2,2)));
	cout << "\n\nO resultado da HIPOTESUDA e: "<<H;
	
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
