#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	float Tm, O, H;
	cout << "\n Exercico 15 - (taxa de Mortalidade) Mata todo mundo\n";
	cout << "\n Quantas pessoas bateram as botas? ";
	cin >> O;
	cout << "\n\nQuantas pessoas tem em seu país (incluindo os mortos que morreram): ";
	cin >> H;
	Tm = (O*1000)/H;
	cout << "\n\n\nA mortalidade em seu país é de: " << Tm;
 	cout << "\n\n\n";
	
	
	system ("pause");
	return 0;
}
