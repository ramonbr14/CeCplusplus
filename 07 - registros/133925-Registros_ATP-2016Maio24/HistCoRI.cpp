//Nome do programa: HistCoRI.cpp
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <Windows.h>
#define  TAMCONJ 2
using namespace std;
void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

//definição da estrutura de um registro de conjuntos de um aluno
struct HistoricoEscolar {
   char	  disciplina[30], situacao;
   float  notas[5];
   int	  faltas;
};

int main(){
   int i;
   char aluno[50];
   //char *aluno = "";
   int ano;
   HistoricoEscolar ficha2005[TAMCONJ]; 	//declaração da variável que é um conj. de registros

   system("cls");
   gotoxy(1,5);
   cout << "*********************  Programa: Historico Escolar ***********************";

   //Entrada dos dados da ficha
   cout << "\nAluno: ";
   gets(aluno);
   cout << "\nAno:   ";
   cin >> ano;
   for(i=0;i<TAMCONJ;i++){
     fflush(stdin);
	 cout << "-------------------------------------------------------";
     cout << "\nDisciplina: ";
     gets(ficha2005[i].disciplina);
     cout << "\nNotas Bimestrais: ";
     cout << "\n  -> Primeira: ";
     cin >> ficha2005[i].notas[0];
     cout << "\n  -> Segunda: ";
     cin >> ficha2005[i].notas[1];
     cout << "\n  -> Terceira: ";
     cin >> ficha2005[i].notas[2];
     cout << "\n  -> Quarta: ";
     cin >> ficha2005[i].notas[3];
     cout << "\nNumero de Faltas: ";
     cin >> ficha2005[i].faltas;

   }

   //Processamento da m‚dia e da situação dos alunos nas disciplinas
   for(i=0;i<TAMCONJ;i++){
     ficha2005[i].notas[4]=(ficha2005[i].notas[0] + ficha2005[i].notas[1] + ficha2005[i].notas[2] + ficha2005[i].notas[3])/4;
     if(ficha2005[i].notas[4]>=5)
       ficha2005[i].situacao ='A';
     else
       ficha2005[i].situacao ='R';
   }
   //Sa¡da dos dados da ficha
   system("cls");
   gotoxy(1,5);
   cout << "***************************  HISTORICO ESCOLAR *****************************";
   gotoxy(5,7);
   cout << "Aluno: " << aluno;
   gotoxy(5,8);
   cout << "Ano:   " << ano;
   gotoxy(1,11);
   cout << "----------------------------------  Notas Bimestrais  -----------------------";
   gotoxy(1,12);
   cout << " Disciplina";
   gotoxy(30,12);
   cout << "1a    2a    3a    4a    Media   Situacao  Faltas";
   gotoxy(1,13);
   cout << "-----------------------------------------------------------------------------";
   for(i=0;i<TAMCONJ;i++){
     gotoxy(2,14+i);
     cout << ficha2005[i].disciplina;
     gotoxy(30,14+i);
     printf("%2.1f",   ficha2005[i].notas[0]);
     gotoxy(36,14+i);
     printf("%2.1f",   ficha2005[i].notas[1]);
     gotoxy(42,14+i);
     printf("%2.1f",   ficha2005[i].notas[2]);
     gotoxy(48,14+i);
     printf("%2.1f",   ficha2005[i].notas[3]);
     gotoxy(55,14+i);
     printf("%2.1f",   ficha2005[i].notas[4]);
     gotoxy(62,14+i);
     if(ficha2005[i].situacao=='A')
	   cout << "Aprovado";
     else
	   cout << "Reprovado";
     gotoxy(74,14+i);
     cout << ficha2005[i].faltas;
   }
   getchar();
   return 0;
}

