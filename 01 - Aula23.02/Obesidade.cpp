#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>

#define LIMITE 30
using namespace std;
int main(){
	float peso, altura, imc;
	cout << "\n\n Programa de Verifica��o de Obesidade -  Cuidado programa Cheio de Bulling";	
	cout << "\n\n Qual seu peso? (N�o Mente!)";
	cin >> peso;
	cout << "\n\n Agora me diga sua altura: ";
	cin >> altura;
	imc = peso/pow(altura,2);
	cout << "\n\n O Seu I.M.C � de...." << imc;
	if(imc<=LIMITE)
			cout << "\n\nPode comer a batata frita que voc� n�o esta gordo!";
		else
			cout << "\n\nFecha a boca e vai fazer um regime, voc� esta gordo";
	
	cout << "\n\n\n";
	system("pause");
	return 0;
}
