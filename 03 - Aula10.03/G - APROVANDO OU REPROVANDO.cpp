#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main () {
	system ("cls");
	
	float M, F, n1, n2;
	cout << "\n\nEXERCICIO G - APROVANDO OU REPROVANDO";
	cout << "\n\nDigite a primeira nota do Aluno: ";
	cin >> n1;
	cout << "\n\nDigite a segunta nota do Aluno: ";
	cin >> n2;
	cout << "\n\nDigite quantas horas o Aluno faltou no curso: ";
	cin >> F;	
	M = (n1+n2)/2;
	if(F>20)
		{
		cout << "\n\nALUNO REPROVADO POR FALTA!";
		cout << "\n\nApesar de ter tirado a media: "<< M;
		}
	else
		{
			if(M>=5)
				{
				cout << "\n\nMEDIA DO ALUNO: "<<M;
				cout << "\n\nALUNO APROVADO! - CONGRATULATIONS!!!!";
				}
			else
				cout << "\n\nALUNO REPROVADO POR MEDIA! nota: "<<M;
		}
	
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}

