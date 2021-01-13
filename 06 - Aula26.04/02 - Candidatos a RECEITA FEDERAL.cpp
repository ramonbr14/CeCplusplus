#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	char L;
	int c, Matr[7];
	float Qt[7], Md[7];
	L = 'S';
	
	cout << "\n\nVETORES E MATRIZES - Exercicio 2 - Candidatos a RECEITA FEDERAL";
	
	while (L=='s'||L=='S')
		{
			for (c=0;c<7;c++)
				{
					cout << "\n\nEntre com a Matricula do canditado: ";
					cin >> Matr[c];
					cout << "\nQuantas questões ele acertou: ";
					cin >> Qt[c];
					Md[c] = (Qt[c]/100)*100;
				}	
			for (c=0;c<7;c++)
				{
					cout << "\n\nO Cantidado: "<<Matr[c];
					if(Qt[c]>50)
						cout << " FOI APROVADO!";
					else
						cout << " FOI REPROVADO!";
				}
			cout << "\n\nDeseja Repetir? ";
			cin >> L;	
	 	} 
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
