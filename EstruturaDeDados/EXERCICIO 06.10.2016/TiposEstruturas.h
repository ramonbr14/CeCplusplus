//Estruturas de tipos
#include "fta.h"

struct LCurso{
	//struct LCurso *pAntC;
	int codigo;
	string nome;
	struct LCurso *pProxC;
}nurso, *pCx;

struct LAluno {
	//struct LCurso *pAntA;
	int matricula;
	string nome;
	string email;
	Data dataNasc;
	struct LAluno *pProxA;
}nluno, *pAx;

struct LMatriculado {
    //struct LMatriculado *pAntM;
	int Matriculad;
	int codigoC;
	string nomeA;
	string Situacao;
	Data *date;
	struct LMatriculado *pProxM;
}natri, *pMx;

