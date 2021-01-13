#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <Windows.h>
#include <string.h>
using namespace std;
int o,i,c,ck;
char L, ch;
int sorteados[6];
int Cartao[7];
void Tela(){
		cout << "*************************PROGRAMA VERIFICA MEGA SENA**********************";
		cout << "\t\t\t\t\tVERSAO TADS 0.1/2016";
}

void Menu(){
		Tela();
		cout << "\n\nCOMO DESEJA VERIFICAR O RESULTADO?";
		cout << "\n\n\t1 - POR SORTEIO.";
		cout << "\n\n\t2 - MANUALMENTE.";
		cout << "\n\n\t3 - CADASTRAR CARTAO?";
		cin >> o;
}
void Sorteio(){
		for(i=0;i<6;i++)
					{
						do
						{
							sorteados[i] = rand() % 60;
						}
						while(o==0);
					}
		cout << "\n\nOS NUMEROS SORTEADOS FORAM: ";
		for(i=0;i<6;i++)
					cout << " "<<sorteados[i];
		
		cout << "\n\n\n";
		system("pause");
		ifstream fin;
		fin.open("cartoesRAMONSS.txt",ios::in);
		for(i=0;i<8;i++)
			{
				while (fin.get(ch))
						cout << ch;
				
			}
}
int main (){
	L = 'S';
	system("cls");
	
	while (L=='S')
		{
			Menu();
			switch(o)
					{
						case 1: Sorteio();break;
					}
			cout << "\n\nDeseja Repetir? ";
			cin >> L;
			L = toupper(L);	
	 	} 
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
