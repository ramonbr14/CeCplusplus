// Listas de Listas
#include "interfaces.h"

using namespace std;

char palavraTp[20];
char palavraTi[20];
char letraT[1];

struct Palavras{
	char portugues[20];
	char ingles[20];
	Palavras *pPalavras;
}*AxPalavra, *nP;

struct Letras{
	char letra[1];
	Letras *dirLetra;
	Letras *esqLetra;
	Palavras *pLPalavras;
}*AxLetra, nL*;
Letras *iLisE = NULL;
