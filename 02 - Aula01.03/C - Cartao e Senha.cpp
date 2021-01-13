#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	float senha, cartao, c, s;
	cartao = 123456;
	senha = 7890;
	cout << "\n\nEXERCICIO c - Cartão e Senha";
	cout << "\n\nPara ter acesso a conta digite o numero do cartão   ";
	cin >> c;
	cout << "\n\ndigite a Senha ";
	cin >> s;
	if(cartao==c&&senha==s)
		cout << "\n\n\nACESSO AUTORIZADO!";
	else
		cout << "\n\n\nACESSO NEGADO!";
	
	
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
