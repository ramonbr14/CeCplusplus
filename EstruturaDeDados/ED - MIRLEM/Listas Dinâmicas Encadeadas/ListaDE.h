//ListaDE.h
#include <stdlib.h>
#include <stdio.h>


int c, n, p, k;
struct listaE {
	int in;
	struct listaE* seg;
};
typedef struct listaE ListaE;


int menu();
int colherNUM();
void implista(ListaE* l);
void consultar(ListaE* l);

//implista();
//exclista();
