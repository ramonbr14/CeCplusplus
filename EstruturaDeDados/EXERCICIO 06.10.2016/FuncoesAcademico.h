#include "TiposEstruturas.h"
//Funções de Cadastro e Exclusão

LAluno *pTempA;
LCurso *pTempC;
LMatriculado *pTempM;

LAluno* inicioLA (void){
	return NULL;
}
LCurso* inicioLC (void){
	return NULL;
}
LMatriculado* inicioLM (void){
	return NULL;
}

void consulteAL(){
	
}
//FUNÇÕES DE INCLUSÃO
void coleteAL(){
	pAx->pProxA = (struct LAluno*) malloc(sizeof(struct LAluno));
	pAx = pAx->pProxA;
	cout << "\nCadastro do aluno";
	cout << "\n\nMATRICULA: ";
	cin >> mct;
	pAx->matricula = mct;
	fflush(stdin);
	cout << "\nNOME     : ";
	cin >> nt;
	pAx->nome = nt;
	fflush(stdin);
	cout << "\nE-MAIL   : ";
	cin >> et;
	pAx->email = et;
	fflush(stdin);
	cout << "\nNASCIDO  : ";
	cin >> dnt.dia;
	pAx->dataNasc.dia = dnt.dia;
	cout << " / ";
	cin >> dnt.mes;
	pAx->dataNasc.mes = dnt.mes;
	cout << " / ";
	cin >> dnt.ano;
	pAx->dataNasc.ano = dnt.ano;
	fflush(stdin);
	pAx->pProxA = NULL; 
	}

void coleteCS(){
	pCx->pProxC = (struct LCurso*) malloc(sizeof(struct LCurso));
	pCx = pCx->pProxC;
	cout << "\nCadastro do Curso";
	cout << "\n\nCodigo : ";
	cin >> mct;
	pCx->codigo = mct;
	fflush(stdin);
	cout << "\nCurso  : ";
	cin >>nt;
	pCx->nome = nt;
	fflush(stdin);
	pCx->pProxC = NULL; 
	}

void coleteMT(){
	 //matricula
	 
	pMx->pProxM = (struct LMatriculado*) malloc(sizeof(struct LMatriculado));
	pMx = pMx->pProxM;
	cout << "\n\nMATRICULANDO";
	
	cout << "\nCodigo do Curso:";
	cin >> pMx->codigoC;
	cout<< "\nNome do Aluno:";
	cin >> pMx->nomeA;
	cout <<"\nSituação no curso:";
	cin >> pMx->Situacao;
	fflush(stdin);
	cout << "\nData da Matricula: ";
	cin >> pMx->date->dia;
	cout << " / ";
	cin >> pMx->date->mes;
	cout << " / ";
	cin >> pMx->date->ano;
	fflush(stdin);
	pMx->pProxM = NULL; 
	}
	
// FUNCOES DE CONSULTA

void consultaAL(){
	pAx = &nluno;
	cout << "Digite a Matricula do aluno: ";
	cin > pTempA;
	if
	 
}

void consultaCS(){
	pCx = &nluno;
	cout << "Digite o codigo do Curso: ";
	cin > pTempC;
}

void consultaMT(){
	pMx = &nluno
	cout << "Digite A Matricula do aluno: ";
	cin > pTempM;
}

//Funcões de atualização

void atualiAL(){
	
}

void atualiCS(){
	
}
void atualiMT(){
	
}
//FUNCOES DE EXCLUSÃO

void excluiAL(){
	
}

void excluiCS(){
	
}

void excluiMT(){
	
}
