#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <Windows.h>
using namespace std;
//criação da interface
int op,sop;
char tp[50];
void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
void FundodeTela(){
			cout << "*******************************************************************************\n";//1
			cout << "*                             vs: 0.1.r                                       *\n";//2
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
void MenuOP (){   //	menu de opções para Clientes e Fita de videos
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
void MenuOPM(){
			FundodeTela();
			gotoxy(3,6);
			cout << "1- ALUGAR FITA";//6
			gotoxy(3,8);
			cout << "2- DEVOLVER FITA";//8
			gotoxy(3,10);
			cout << "3- CONSULTAR ALUGUEIS";//10
			gotoxy(3,12);
			cout << "4- VOLTAR AO MENU";//12
			gotoxy(1,25);
			cin >> sop;
			system("cls");
}
void TelaInicial (){ //Tela do Menu Inicial
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
			if(op<4&&op>0)	
					{
						if(op==1||op==2)
								MenuOP();
						else
								MenuOPM();	
					}
					
			else
				cout << "ERRO! OPCAO INVALIDA";	
}
void TelaIncCliente(){
		system("cls");
		FundodeTela();
		cout << "*PREENCHA OS CAMPOS A BAIXO\n\n";
		gotoxy(3,10);
		fflush(stdin);
		cout << "CODIGO: ";
		//gets(tp); //inserir linha para capturar DO CODIGO
		gotoxy(17,10);
		fflush(stdin);
		cout << "TELEFONE: ";
		//gets(tp); //inserir linha para capiturar DO TELEFONE
		gotoxy(3,12);
		fflush(stdin);
		cout << "NOME: ";
		//gets(tp); //inserir linha para capiturar do Nome
		gotoxy(3,14);
		fflush(stdin);
		cout << "ENDERECO: ";
		//gets(tp); //inserir linha para capiturar do ENDEREÇO
		gotoxy(3,16);
		fflush(stdin);
		cout << "RG: ";
		//gets(tp); //inserir linha para capiturar do RG
		gotoxy(20,16);
		fflush(stdin);
		cout << "CPF: ";
		//gets(tp); //inserir linha para capiturar do CPF
		gotoxy(1,25);
		cout << "Deseja Salvar? 1 - SIM OU 2-NAO.";
		cin >> sop;  
}
void TelaAltCliente(){
		do{
			system("cls");
			FundodeTela();
			gotoxy(3,6);
			cout << "Qual o Dado você deseja alterar?";
			gotoxy(3,8);
			cout << "1 - Nome";
			gotoxy(3,9);
			cout << "2 - Endereco";
			gotoxy(3,10);
			cout << "3 - Telefone";
			gotoxy(3,11);
			cout << "4 - RG";
			gotoxy(3,12);
			cout << "5 - CPF";
			gotoxy(1,25);
			cin >> sop;
			system("cls");
			FundodeTela();
			gotoxy(3,6);
			cout << "Digite o Codigo do Cliente: ";
			cin >> (tp);//
			fflush(stdin);
			system("cls");
			FundodeTela();
			gotoxy(3,10);
			cout << "CODIGO: ";
			//Inserir codigo Resgatado
			gotoxy(17,10);
			cout << "TELEFONE: ";
			//Inserir Telefone resgatado
			gotoxy(3,12);
			cout << "NOME: ";
			//Inserir Nome resgatado
			gotoxy(3,14);
			cout << "ENDERECO: ";
			//Inserir Endereço resgatado
			gotoxy(3,16);
			cout << "RG: ";
			//Inserir RG resgatado
			gotoxy(20,16);
			cout << "CPF: ";
			//Inserir CPF resgatado
			switch (sop)//inserir nos case os codigos do Tipo a ser alterado
					{
						case 1:gotoxy(9,12);/*cout<< "OK!";Nome*/break;
						case 2:gotoxy(13,14);/*cout<< "OK!";/*Endereco*/break;
						case 3:gotoxy(27,10);/*cout<< "OK!";/*Telefone*/break;
						case 4:gotoxy(7,16);/*cout<< "OK!"/*RG*/;break;
						case 5:gotoxy(25,16);/*cout<< "OK!";/*CPF*/break;
					}
		gotoxy(1,25);
		cout << "Deseja alterar os dados desse cliente? 1-SIM 2-SIM";
		if(sop==1)
					{
						//inserir o codigo para gravar tudo de volta no mesmo arquivo
						cout << "CADASTRO ATUALIZADO COM SUCESSO";	
					}
					
			else
					cout << "CADASTRO NÃO FOI ALTERADO";
		
		system("pause");
		system("cls");
		FundodeTela();
		gotoxy(3,6);
		cout << "Deseja alterar outro Dado? 1 - SIM OU 2 - NAO.";
		cin >> sop; 
		}
		while(sop==1);
		system("cls");		
}
void TelaExcCliente(){
			
			system("cls");
			FundodeTela();
			gotoxy(3,10);
			cout << "CODIGO: ";
			//Inserir codigo Resgatado
			gotoxy(17,10);
			cout << "TELEFONE: ";
			//Inserir telefone resgatado
			gotoxy(3,12);
			cout << "NOME: ";
			//Inserir Nome resgatado
			gotoxy(3,14);
			cout << "ENDEREÇO: ";
			//Inserir Endereço resgatado
			gotoxy(3,16);
			cout << "RG: ";
			//Inserir RG resgatado
			gotoxy(20,16);
			cout << "CPF: ";
			//Inserir CPF resgatado
			cout << "Deseja Excluir esse cliente? 1-SIM 2-SIM";
			
			cin >>sop;
			if(sop==1)
					{
					//inserir comando para deletar o arquivo
					cout << "CADASTRO EXCLUIDO COM SUCESSO";	
					}
					
			else
					cout << "CADASTRO NÃO FOI ALTERADO";
			system("pause");
}
void TelaIncFita(){
		system("cls");
		FundodeTela();
		gotoxy(3,10);
		cout << "CODIGO: ";
		//inserir linha para capturar DO CODIGO
		gotoxy(17,10);
		cout << "OSCAR (S/N): ";
		//inserir linha para capturar da resposta, atenção a Letra
		gotoxy(3,12);
		cout << "TITULO: ";
		//inserir linha para capturar o titulo
		gotoxy(3,14);
		cout << "ASSUNTO: ";
		//inserir linha para capturar DO Assunto
		gotoxy(3,16);
		cout << "DATA DA COMPRA ";
		//inserir linha para capturar da Data
		gotoxy(20,16);
		cout << "PREÇO: ";
		//inserir linha para capturar do Preço
		gotoxy(1,25);
		cout << "Deseja Salvar? 1 - SIM OU 2-NAO.";
		cin >> op;
		//inserir codigo para salvar os dados 
		system("pause");
}
void TelaAltFita(){
		{
			system("cls");
			FundodeTela();
			gotoxy(3,6);
			cout << "Qual o Dado você deseja alterar?";
			gotoxy(3,8);
			cout << "1 - TITULO";
			gotoxy(3,9);
			cout << "2 - ASSUNTO";
			gotoxy(3,10);
			cout << "3 - OSCAR";
			gotoxy(3,11);
			cout << "4 - DATA DA COMPRA";
			gotoxy(3,12);
			cout << "5 - PREÇO";
			gotoxy(1,25);
			cin >> sop;
			system("cls");
			FundodeTela();
			gotoxy(3,6);
			cout << "Digite o Codigo dda Fita:";
			fflush(stdin);
			system("cls");
			FundodeTela();
			gotoxy(3,10);
			cout << "CODIGO: ";
			//Resgate DO CODIGO
			gotoxy(17,10);
			cout << "OSCAR (S/N): ";
			//Resgate da Informação
			gotoxy(3,12);
			cout << "TITULO: ";
			//Resgate da Informação
			gotoxy(3,14);
			cout << "ASSUNTO: ";
			//Resgate da Informação
			gotoxy(3,16);
			cout << "DATA DA COMPRA: ";
			//Resgate da Informação
			gotoxy(20,16);
			cout << "PREÇO: ";
			//Resgate da Informação
			gotoxy(1,25);
			switch (sop)
					{
						case 1:gotoxy(11,12);/*cout<< "OK!";TITULO*/break;
						case 2:gotoxy(12,14);/*cout<< "OK!";/*ASSUNTO*/break;
						case 3:gotoxy(30,10);/*cout<< "OK!";/*OSCAR S/N*/break;
						case 4:gotoxy(19,16);/*cout<< "OK!"/*DATA DA COMPRA*/;break;
						case 5:gotoxy(27,16);/*cout<< "OK!";/*PREÇO*/break;
					}
			gotoxy(1,25);
			
			cout << "Deseja Excluir esse cliente? 1-SIM 2-SIM";
			cin >>sop;
			if(sop==1)
					//inserir o codigo para gravar tudo de volta no mesmo arquivo
					cout << "CADASTRO EXCLUIDO COM SUCESSO";
			else
					cout << "CADASTRO NÃO FOI ALTERADO";
			system("pause");system("pause");
			system("cls");
			FundodeTela();
			gotoxy(3,6);
			cout << "Deseja alterar outro Dado? 1 - SIM OU 2 - NAO.";
			cin >> op; 
			}
			while(op==1);
			system("pause");
}
void TelaExcFita(){
			system("cls");
			FundodeTela();
			gotoxy(3,6);
			cout << "Digite o Codigo da Fita: ";
			gets(tp);
			FundodeTela();
			gotoxy(3,10);
			cout << "CODIGO: ";
			//Resgate DO CODIGO
			gotoxy(17,10);
			cout << "OSCAR (S/N): ";
			//Resgate da Informação
			gotoxy(3,12);
			cout << "TITULO: ";
			//Resgate da Informação
			gotoxy(3,14);
			cout << "ASSUNTO: ";
			//Resgate da Informação
			gotoxy(3,16);
			cout << "DATA DA COMPRA ";
			//Resgate da Informação
			gotoxy(20,16);
			cout << "PREÇO: ";
			//Resgate da Informação
			cout << "Deseja Excluir essa Fita? 1-SIM 2-SIM";
			cin >> sop;
			//inserir comando para deletar o arquivo
			system("pause");
			
}
int diasAlugado;
void MovimentoSaida(){
			FundodeTela();
			gotoxy(3,6);
			cout << "Digite o Codigo do Cliente: ";
			//gets(tp);
			system("pause");//temporario
			gotoxy(3,8);
			cout << "Digite o Codigo da fita: ";
			//gets(tp);
			system("pause");//temporario
			gotoxy(3,10);
			cout << "Quantos dias de aluguel?";//criar variavel para quantos dias foi alugado;
			cin >> diasAlugado;
			cout << "Confirmar aluguel?";
			cin >> sop;
			if(sop==1)
						{
							//registrar alugel;
							cout << "ALUGUEL REALIZADO!";
						}
			else
						cout << "CANCELADO!";
			system("pause");
}
void MovimentoBaixa(){
			FundodeTela();
			gotoxy(3,6);
			cout << "Digite o Codigo do Cliente: ";
			//gets(tp); Subistituir Pelo tipo para Registro
			system("pause");//temporario 
			gotoxy(3,8);
			cout << "Digite o Codigo da fita: ";
			//gets(tp);Subistituir Pelo tipo para Registro
			system("pause");//temporario
			gotoxy(3,10);
			cout << "Quantos dias passou com o cliente?";//criar variavel para quantos dias foi alugado;
			cin >> sop;
			if(diasAlugado<sop)
						cout << "AVISO: COBRAR MULTA POR ATRASO";
			else
						cout << "DEVOLUCAO DENTRO DO PRAZO";
			cout << "Confirmar devolucao?";
			cin >> sop;
			if(sop==1)
						{
							//registrar devolução da fita;
							cout << "DEVOLUÇÃO REGISTRADA!";
						}
			else
						cout << "CANCELADO!";
			system("pause");
}
void MovimentoConsulta(){
		system("cls");
		FundodeTela();
		gotoxy(10,6);
		cout << "FITAS ALUGADAS NO MOMENTO ";
		gotoxy(3,10);
		cout << "CODFITA";
		gotoxy(13,10);
		cout << "TITULO";
		gotoxy(30,10);
		cout << "CODCLIENTE";
		gotoxy(43,10);
		cout << "NOME";
		gotoxy(20,12);
		cout << "DIAS DE ALUGUEL";
		system("pause");
}

int main(){
	system("cls");
	system("color A1");
	do {
		TelaInicial();
		if(op==1)
			{
				switch(sop){
						case 1: TelaIncCliente();break;
						case 2: TelaAltCliente();break;
						case 3: TelaExcCliente();break;
				}
			}
		if(op==2)
			{
				switch(sop){
						case 1: TelaIncFita();break;
						case 2: TelaAltFita();break;
						case 3: TelaExcFita();break;
				}
			}
		if(op==3)
			{
				switch(sop){
						case 1: MovimentoSaida();break;
						case 2: MovimentoBaixa();break;
						case 3: MovimentoConsulta();break;
				}
			}
					
	}
	while(op<4&&op>=0);
	
	system ("pause");
	return 0;
}
