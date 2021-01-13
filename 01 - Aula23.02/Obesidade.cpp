#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>

#define LIMITE 30
using namespace std;
int main(){
	float peso, altura, imc;
	cout << "\n\n Programa de Verificação de Obesidade -  Cuidado programa Cheio de Bulling";	
	cout << "\n\n Qual seu peso? (Não Mente!)";
	cin >> peso;
	cout << "\n\n Agora me diga sua altura: ";
	cin >> altura;
	imc = peso/pow(altura,2);
	cout << "\n\n O Seu I.M.C é de...." << imc;
	if(imc<=LIMITE)
			cout << "\n\nPode comer a batata frita que você não esta gordo!";
		else
			cout << "\n\nFecha a boca e vai fazer um regime, você esta gordo";
	
	cout << "\n\n\n";
	system("pause");
	return 0;
}
