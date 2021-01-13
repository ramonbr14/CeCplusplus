#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system ("cls");
	
	float IMC, A, P;
	cout << "\n\n\nEXERCICIO H - IMC E GRUPOS DE RISCO!";
	cout << "\n\n\nEntre com o peso da pessoa: ";
	cin >> P;
	cout << "\n\n\nAgora, entre com a altura da pessoa: ";
	cin >>A;
	IMC = P/(pow(A,2));
	cout<< "\n\n\nSeu IMC é de: "<<IMC;
	if(IMC>=18.5)
		{
			if(IMC>=25.0)
				{
					if(IMC>=30.0)
						{
						if(IMC>=35.0)
							{
								if(IMC>=40.0)
									cout << "\n\nOBESIDADE CLASSE III - RISCO: Muito Grave. ";
								else
									cout << "O\n\nBESIDADE CLASSE II - RISCO: Grave. ";
							}
						else
							cout << "\n\nOBESIDADE I - RISCO: Moderado! ";
						}
					else
						cout << "\n\nSOBREPESO - RISCO: Pouco Aumentado";
				}
			else
				cout << "\n\nNORMAL - RISCO: Baixo";
		}
	else
		cout << "\n\nALERTA - BAIXO PESO!";
	
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
