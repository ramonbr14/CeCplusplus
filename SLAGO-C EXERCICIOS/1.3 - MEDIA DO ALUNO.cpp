#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main (){
	system ("cls");
	
	float media, Nota1, Nota2;
	
	cout << "\n\n\nSLAGO-C - EXERCICIO 1.3 - MEDIA DO ALUNO";
	cout << "\n\n\nInforme as duas notas do aluno: ";
	cin >> Nota1;
	cin >> Nota2;
	media = (Nota1 + Nota2)/2;
	cout << "\n\n\nA media do Aluno é: "<<media;
	
	cout <<"\n\n\n\n";
	system ("pause");
	return 0;
	
}
