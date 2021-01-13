//Estruturas de tipos
#include "fta.h"

struct curso{
	int codigo;
	string nome;
};

struct Aluno {
	int matricula;
	string nome;
	string email;
	Data dataNasc;
	struct Aluno *pProx;
};
