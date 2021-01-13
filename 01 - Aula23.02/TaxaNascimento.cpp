#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>


using namespace std;
int main(){
	system("cls");
	float Tx, Nn, Nh;
	cout << "\n Exercicio 14 - Taxa de nascimento";
	cout << "\n Me diz quantos filhotes de humanos nasceram ano passado?";
	cin >> Nn;
	cout << "\n E quantos habitantes tem?";
	cin >> Nh;
	Tx = (Nn*1000)/Nh;
	cout << "\n A taxa de nascimento é de "<< Tx;
	cout<< " Por habitante"; 
	
	
	
	system ("pause");
	return 0;
}
