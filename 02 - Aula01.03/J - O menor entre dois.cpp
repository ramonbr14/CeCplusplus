#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	float n1,n2;
	cout << "\n\n\nEXERCICIO J - O MAIOR ENTRE DOIS";
	cout << "\n\n\nDigite um numero:   ";
	cin >> n1;
	cout << "\n\n\nDigite outro numero: ";
	cin >> n2;
	if(n1==n2)
		cout << "\n\n\nEsses numeros são IGUAIS!";
	else{
		if(n1>n2)
			cout << "\n\n\nO Numero menor eh: "<<n2;
		else
			cout << "\n\n\nO Menor numero eh: "<<n1;
		}
		
	cout << "\n\n\n";
	system ("pause");
	return 0;
}
