#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <Windows.h>
#include <unistd.h> // sleep
#include <dirent.h> // Sistema de leitura de arquivos
#include "definicoes.cpp"
#include "jFuncoes.cpp"
#include "funcoesCliente.cpp"
#include "funcoesFitas.cpp"
#include "fitaSaidaRetorno.cpp"
#include "funcoesConsultas.cpp"
#include "funcoesRelatorios.cpp"

// ALUNO: RAMON DOS SANTOS SILVA MATRICULA 2016118970019
// ALUNO; JONATHAN FEITOSA DE SOUZA MATRICULA 2016118970140
int main(){
	
	criarArquivos();
	
	system("cls");
	system("color A0");
	
	do {
		
		TelaInicial();
		system("cls");
		
		if(op==1){
			MenuOP();
			switch(sop){
				case 1: TelaIncCliente();break;
				case 2: TelaAltCliente();break;
				case 3: TelaExcCliente();break;
			}
		}
		else if(op==2){
			MenuOP();
			switch(sop){
				case 1: TelaIncFita();break;
				case 2: TelaAltFita();break;
				case 3: TelaExcFita();break;
			}
		}
		else if(op==3){
			MenuOPM();
			switch(sop){
				case 1: MovimentoSaida();break;
				case 2: MovimentoBaixa();break;
				case 3: MovimentoConsulta();break;
				case 4: MovimentoRelatorios();break;
			}
		}
					
	}while(op < 4 && op >= 0);
	
	system ("pause");
	return 0;
}

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

void criarArquivos(){
	
	if(!jExiste("clientes"))
		mkdir("clientes");

	if(!jExiste("fitas"))
		mkdir("fitas");

	if(!jExiste("alugueis"))
		mkdir("alugueis");

	if(!jExiste("alugueisativos"))
		mkdir("alugueisativos");

	if(!jExiste("relatorios"))
		mkdir("relatorios");
									
	if(!jExiste("config.ini")){
		jCriarInt("config.ini", "clientes", 00000);
		jCriarInt("config.ini", "fitas", 00000);
		jCriarInt("config.ini", "alugadas", 00000);
		jCriarInt("config.ini", "alugueisativos", 00000);
	}
}
void FundodeTela(){
	cout << "*******************************************************************************\n";//1
	cout << "*                             vs: 1.5                                         *\n";//2
	cout << "*                           JR VIDEOLOCADORA                                  *\n";//3
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

void TelaInicial (){ //Tela do Menu Inicial

	fflush(stdin);
	system("cls");
	FundodeTela();
	gotoxy(3,6);
	cout << "1- CLIENTES";//6
	gotoxy(3,8);
	cout << "2- FITAS/DVDs DE VIDEO";//8
	gotoxy(3,10);
	cout << "3- MOVIMENTO DE FITAS/DVDs";//10
	gotoxy(3,12);
	cout << "4- ENCERRAR/FECHAR";//12
	gotoxy(1,25);
	cin >> op;
	system("cls");
}

void MenuOPM(){
	FundodeTela();
	gotoxy(3,6);
	cout << "1- ALUGAR FITA";//6
	gotoxy(3,8);
	cout << "2- DEVOLVER FITA";//8
	gotoxy(3,10);
	cout << "3- CONSULTAR ALUGUEIS";//10
	gotoxy(3,12);
	cout << "4- RELATORIOS";//10
	gotoxy(3,14);
	cout << "5- VOLTAR AO MENU";//12
	gotoxy(3,25);
	cin >> sop;
	system("cls");
}

void MenuOP (){   //	menu de opções para Clientes e Fita de videos
	fflush(stdin);
	FundodeTela();
	gotoxy(3,6);
	cout << "1- INCLUIR NOVO";//6
	gotoxy(3,8);
	cout << "2- ALTERAR CADASTRO";//8
	gotoxy(3,10);
	cout << "3- EXCLUIR CADASTRO";//10
	gotoxy(3,12);
	cout << "4- VOLTAR AO MENU";//12
	gotoxy(1,25);
	cin >> sop;
	system("cls");
}


