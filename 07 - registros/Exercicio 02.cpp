#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int c;
char L1,L2;
struct Curso {
			int Codigo;
			char Nome[50];	
};
struct DataNascimento {
			int Dia;
			int Mes;
			int Ano;			
};
struct Professor{
			int Matricula;
			char Nome[50];
			DataNascimento Dia;
			DataNascimento Mes;
			DataNascimento Ano;
			char Titulacao;
			char Ativo;
};
struct Disciplina{
			int codigo;
			char Nome[50];
			int CargaHoraria;
			Curso Codigo; ;
};
struct Aluno{
			int Matricula;
			char Nome[50];
			DataNascimento Data;
			char Nivel;
			char Situacao;
};
struct HistoricoEscolar {
			Disciplina Codigo;
			Aluno Nome; 
			float notaBim1;
			float notaBim2;
			float notaBim3;
			float notaBim4;
			float MediaFinal;
			int Ano, faltas;
			char situacao;
};
void Menu(){
			cout << "MENU UNIVERSIDADE TADS";
			cout << "\n\n1 - CADASTRAR CURSO";
			cout << "\n2 - CADASTRAR ALUNO";
			cout << "\n3 - CADASTRAR DISCIPLINA";
			cout << "\n4 - CADASTRAR PROFESSOR";
			cout << "\n5 - HISTORICO ESCOLAR";
			cout << "\n\n\nOPCAO: ";
			cin >> c;
			system("cls");
}
Curso C001, C002;
void ImpCurso(){
			cout << "\nLISTA DOS CURSOS CADASTRADOS";
			cout << "\n\nCODIGO: "<<C001.Codigo << "\nCURSO: "<<C001.Nome << "\n\n\n";
			cout << "\nLISTA DOS CURSOS CADASTRADOS";
			cout << "\n\nCODIGO: "<<C002.Codigo << "\nCURSO: "<<C002.Nome << "\n\n\n";
}
void CadCurso(){
			cout << "\nDEFINA O CODIGO DO CURSO: ";
			cin >> C001.Codigo;
			fflush(stdin);
			cout << "\n\nDEFINA O NOME DO CURSO: ";
			gets (C001.Nome);
			//cin.getline (C001.Nome,50); 
			//cout << C001.Nome;
			system("pause");
			system("cls");
			cout << "\nDEFINA O CODIGO DO CURSO: ";
			cin >> C002.Codigo;
			fflush(stdin);
			cout << "\n\nDEFINA O NOME DO CURSO: ";
			gets (C002.Nome);
			//cin.getline (C002.Nome,50); 
			//cout << C002.Nome;
			system("cls");
			ImpCurso();
			cout << "\n\n\n\n";
			system("pause");
}
Aluno A001;
void ImpAluno(){
			cout << "DADOS DOS ALUNOS";
			cout << "\n\nNOME: "<< A001.Nome;
			cout << "\n\nDATA DE NASCIMENTO: " << A001.Data.Dia <<"\\"<<A001.Data.Mes<< "\\"<< A001.Data.Ano;
			cout << "\n\nNIVEL: ";
			switch(L1)
						{
							case 'E': cout << "ENSINO MEDIO";break;
							case 'G': cout << "GRADUACAO";break;
							case 'S': cout << "ESPECIALIZACAO";break;
							case 'M': cout << "MESTRADO";break;
							case 'D': cout << "DOUTORADO";break; 
						}
			cout << "\nSITUACAO: ";
			switch(L2)
						{
							case 'A': cout << "ABANDONOU!";break;
							case 'C': cout << "CONCLUIDO!";break;
							case 'M': cout << "MATRICULADO!";break;
							case 'T': cout << "TRANCADO!";break;
							case 'J': cout << "JUBUILADO!";break;
							case 'R': cout << "TRANSFERIDO!";break;
						}
			cout << "\n\n\n\n";
			system("pause");
}
void CadAluno(){
			system("cls");
			cout << "FORMULARIO DE CADASTRO DO ALUNO";
			cout << "\nNOME: ";
			gets (A001.Nome);
			cin.getline(A001.Nome,50);
			cout << "\nData de Nascimento: ";
			cin >> (A001.Data.Dia);
			cin >> (A001.Data.Mes);
			cin >> (A001.Data.Ano);
			//system ("cls");
			cout << "\nDEFINA O NIVEL DO ALUNO CONFORME A TABELA";
			cout << "\n\nE - Ensino Medio.\n\nG - Graduação.\n\nS - Especializacao.\n\nM - Mestrado.\n\nD - Douturado.\n\n\n";
			L1 = getche();
			system ("cls");
			cout << "\nSITIACAO ATUAL COM BASE NA TABELA. ";
			cout << "\n\nA - Abandono.\n\nM - Matriculado\n\nC - Concluido.\n\nT - Trancado.\n\nJ - Jubilado.\n\nR - tRancado.\n\n\n";
			L2 = getche();
			system("cls");
			ImpAluno();
			
}
int main (){
	system("cls");
	//L = 'S';
	Curso C001, C002;
	do{
		Menu();
		switch(c){
				case 1: CadCurso();break;
				case 2: CadAluno();break;
				//case 3: CadDisciplina;break;
				//case 4: CadProfessor;break;
				default:c=0;break;
		}
	}
	while(c!=0);
		
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
