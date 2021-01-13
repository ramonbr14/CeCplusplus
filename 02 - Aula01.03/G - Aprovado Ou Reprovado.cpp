#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	float n;
	cout << "EXERCICIO G - APROVADO ou REPROVADO";
	cout << "\n\n\nDigite a nota do Aluno:  ";
	cin >> n;
	if(n<5.0)
		cout << "\n\n\nREPROVADO!!! - QUEM MANDOU NAO ESTUDAR!!!!";
	
	else
		cout << "\n\n\nAPROVADO -  PARABENS!";
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
