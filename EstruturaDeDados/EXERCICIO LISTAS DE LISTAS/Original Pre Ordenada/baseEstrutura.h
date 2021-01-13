// Listas de Listas
#include "interfaces.h"

using namespace std;

char palavraT[20];
char letraT[1];

struct Palavras{
	char palavra[20];
	Palavras *pPalavras;
}*AxPalavra;
Palavras *anP = NULL;

struct Letras{
	char letra[1];
	Letras *ppletra;
	Palavras *pLPalavras;
}*AxLetra;
Letras *anL = NULL;
Letras *iLisE = NULL;
Letras *fLisE = NULL;



