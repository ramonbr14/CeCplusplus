//Interface
//Questao B -  Intefaces
//RAMON DOS SANTOS SILVA
//2016118970019
//TADS-ESTRUTURA DE DADOS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <cstdlib>
#include <locale>
#include <string>
#include <math.h>
#include <ctype.h>
#include <Windows.h>

using namespace std;

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

int op1, op2;

void fundoTELA(){
	cout << "*******************************************************************************\n";//1
	cout << "*                             vs: 1.0                                         *\n";//2
	cout << "*                 DICIONARIO DO NARIO TADS 2016                               *\n";//3
	cout << "*                         sem ordenação                                       *\n";//4
	cout << "*                                                                             *\n";//5	
	cout << "*                                                                             *\n";//6
	cout << "*                                                                             *\n";//7
	cout << "*                                                                             *\n";//8
	cout << "*                                                                             *\n";//9
	cout << "*                                                                             *\n";//10
	cout << "*                                                                             *\n";//11
	cout << "*                                                                             *\n";//12
	cout << "*                                                                             *\n";//13
	cout << "*                                                                             *\n";//14
	cout << "*                                                                             *\n";//15
	cout << "*                                                                             *\n";//16
	cout << "*                                                                             *\n";//17
	cout << "*                                                                             *\n";//18
	cout << "*                                                                             *\n";//19
	cout << "*                                                                             *\n";//20
	cout << "*                                                                             *\n";//21
	cout << "*                                                                             *\n";//22
	cout << "*                                                                             *\n";//23
	//cout << "*******************************************************************************\n";//24
}

void menu(){
	system("cls");
	fundoTELA();
	gotoxy(10,5);
	cout << "Escolha as Opções";
	gotoxy(10,6);
	cout << "01 - ADICIONAR PALAVRA";
	/*gotoxy(10,7);
	cout << "02 - PESQUISAR 1";
	gotoxy(10,8);
	//cout << "03 - PESQUISAR 2";*/
	gotoxy(10,9);
	cout << "04 - IMPRIMIR DICIONARIO";
	/*gotoxy(10,10);
	cout << "05 - ORDENAÇÃO BUBLESORT";
	gotoxy(10,11);
	cout << "06 - ORDENAÇÃO SELECTION SORT";*/
	gotoxy(10,12);
	cout << "09 - ENCERRAR SISTEMA";
	gotoxy(10,25);
	cin >> op1;
}


