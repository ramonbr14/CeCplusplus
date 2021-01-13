#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;
int main (){
	system ("cls");
	
	float I; //I é de idade
	cout << "\n\n\nEXERCICIO F - CLASSIFICANDO OS NADADORES";
	cout << "\n\n\nDigite, por favor, a idade dos nadadores: ";
	cin >> I;
	if(I>=5)
		{
			if(I>=8)
			{
				if(I>=11)
					{
						if(I>=14)
						{
							if(I>=18)
								cout << "\n\nNadador Classe - SENIOR. ";
							else
								cout << "\n\nNadador Classe - JUVENIL B. ";
						}
						else
							cout << "\n\nNadador Classe - JUVENIL A. ";
					}
				else
					cout << "\n\nNadador Classe - INFANTIL B. ";
			}
			else
				cout << "\n\nNAdador Classe - INFANTIL A.";
		}
	else
		cout << "\n\nNadador sem idade minima nescessaria!";
	
	
	cout <<"\n\n\n\n";
	system ("pause");
	
	return 0;
}
