//questao A -  arquivo das estruturas
//RAMON DOS SANTOS SILVA
//2016118970019
//TADS-ESTRUTURA DE DADOS
#include "globais.h"
//#include "interfaces.h"

int  al, cd, op4, op5, op6;
char op3;

struct Data{
	int dia, mes, ano;
};

struct Aluno{
	int matricula;
	char nome[30];
	Data dnasc;
	Aluno *paXAL;
	Aluno *ppXAL;
}/* *iAL = NULL, fAL = NULL,*/ *pAx;	
Aluno *iAL = NULL;
Aluno *fAL = NULL;

struct Disciplina{
	int codigo; // codigo da disciplina
	char nomed[50]; //nome da disciplina
	int ch; //carga horaria
	Disciplina *ppXDC;
}/*iDC, fDC, */*pDx;
Disciplina *iDC = NULL;
Disciplina *fDC = NULL;

struct AlunoDisciplina{
	int alunomat; //Matricula do Aluno
	int codDisc; //codigo da disciplina
	Data dtmat; //data da matricula
	int media;
	char situacao;
	AlunoDisciplina *ppXMT;
} *pMx;
AlunoDisciplina *iMT = NULL;
AlunoDisciplina *fMT = NULL;

//cadastraAL();
