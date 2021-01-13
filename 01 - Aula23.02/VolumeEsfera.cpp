#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

//#define PI 3,14159

using namespace std;
int main(){
	system("cls");
	double Ve, R;
	cout << "\n Exercicio 10 - Volume da Estrela da Morte";
	cout << "\n me diga o raio da Esfera; ";
	cin >> R;
	Ve = (4*M_PI*(pow(R,3)));
	cout << "\n O Valor da Ex-Fera é:" << Ve;
	
	
	
	system ("pause");
	return 0;
}
