#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	float Tg, TGa, TGb;
	cout << "\n Exercicio 09 - A Tangente da Soma de Dois angulos";
	cout << "\n Ei, me diga a Tangente do �ngulo A: ";
	cin >> TGa;
	cout << "\n Me diga a Tangente do �ngulo B: ";
	cin >> TGb;
	Tg=(TGa + TGb)/(1-TGa*TGb);
	cout << "\n A Soma das tangentes �: " <<Tg;
		
	
	system ("pause");
	return 0;
}
