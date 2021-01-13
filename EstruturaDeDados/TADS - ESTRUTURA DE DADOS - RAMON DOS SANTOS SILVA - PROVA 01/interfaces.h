//Questao B -  Intefaces
//RAMON DOS SANTOS SILVA
//2016118970019
//TADS-ESTRUTURA DE DADOS
#include "globais.h"

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

int op1, op2;

void fundoTELA(){
	cout << "*******************************************************************************\n";//1
	cout << "*                             vs: 2.0                                         *\n";//2
	cout << "*                 SISTEMA ACADEMICO DO IMPERIO OUREANO                        *\n";//3
	cout << "*                                                                             *\n";//4
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
	cout << "*******************************************************************************\n";//24
}

void menu(){
	system("cls");
	fundoTELA();
	gotoxy(10,5);
	cout << "Escolha as Opções";
	gotoxy(10,6);
	cout << "01 - ALUNO";
	gotoxy(10,7);
	cout << "02 - CURSO";
	gotoxy(10,8);
	cout << "03 - MATRICULA";
	gotoxy(10,9);
	cout << "09 - ENCERRAR SISTEMA";
	gotoxy(10,25);
	cin >> op1;
}

void submenu(){
	system("cls");
	fundoTELA();
	gotoxy(10,5);
	cout << "Escolha as Opções";
	gotoxy(10,6);
	cout << "01 - INCLUIR";
	gotoxy(10,7);
	cout << "02 - CONSULTAR";
	gotoxy(10,8);
	cout << "03 - ATUALIZAR";
	gotoxy(10,9);
	cout << "04 - EXCLUIR";
	gotoxy(10,10);
	cout << "05 - IMPRIMIR LISTA COMPLETA";
	gotoxy(10,25);
	cin >> op2;
}
