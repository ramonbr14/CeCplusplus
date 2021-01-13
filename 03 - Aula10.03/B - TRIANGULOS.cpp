#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system ("cls");
	
	float a, b, c;
	cout << "\n\nEXERCICIO B - TRIANGULOS";
	cout << "\n\nDigite o valor do primeiro lado: ";
	cin >> a;
	cout << "\n\nDigite o valor do Segundo lado: ";
	cin >> b;
	cout << "\n\nDigite o valor do terceiro lado: ";
	cin >> c;
	if((a<b+c)&&(b<a+c)&&(c<a+b))
		{
		cout << "\n\nATENCAO ESTE É UM TRIANGULO E A SEGUIR O TIPO DE TRIANGULO";
		if (a==b&&b==c)
			cout << "\n\nEste e um triangulo Equilatero!!!";
		else
			{
				if(a==b||b==c||a==c)
					cout << "\n\nEste e um Triangulo Isosceles!!!";
				else
					cout << "\n\nEste e um Triangulo Escaleno";
			}
		}
	else
		cout << "Nao e TRIANGULO!!";
		
	cout <<	"\n\n\n\n";
	system ("pause");
	return 0;
	}
