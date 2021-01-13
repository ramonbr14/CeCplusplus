#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "ListaDE.h"

int menu(){
	printf("O QUE VOCÊ DESEJA FAZER?");
	printf("\n1 - INSERIR NA LISTA");
	printf("\n2 - CONSULTAR NA LISTA");
	printf("\n3 - IMPRIMIR LISTA");
	printf("\n4 - EXCLUIR DA LISTA");
	scanf("%i", &n);
	return n;
}

ListaE* inicioL (void){
	k=0;
	return NULL;
}

int colherNUM(){
	printf("\nDigite um numero: ");
	scanf("%d", &c);
	return c;
}
ListaE* inslista(ListaE* l,int c){
	ListaE* nova = (ListaE*) malloc(sizeof(ListaE));
	nova->in = c;
	nova->seg = l;
	k=k+1;
	return nova;
}
void implista(ListaE* l){
	ListaE* t;
	printf("\nMINHA LISTA DINÂMICA ENCADEADA: ");
	for(t = l; t != NULL; t = t->seg)
		printf(" %d", t->in);
}

void consultar(ListaE* l){
	ListaE* t;
	printf("\nQual numero deseja verificar?: ");
	scanf("%i", &c);
	p = 0;
	//printf("VALOR P %i", p);
	for(t = l; t != NULL; t = t->seg){
		if(c==t->in){
			p = p+1;
			//printf("VALOR P %i", p);
			//system("pause");	
		}
	}
	if(p==0)		
		printf("\nNENHUMA OCORRENCIA DO NUMERO FOI ENCONTRADA!");
	else
		printf("\n\nForam Encontradas %i de vezes que o numero %i aparece.", p, c);
}

ListaE* exclista(ListaE* l,int c){
	ListaE* a = NULL;
	ListaE* t = l;
	//printf("TAMANHO: %i\n\n\n\n", k);
	//do{
	
	while (t != NULL && t->in != c){
		a = t;
		t = t->seg;
	}
	if (t == NULL){
		printf("NÃO FOI ENCONTRADO O ELEMENTO, AVISE A 190!");
		return l;
	}
	if(t->in==c){
			if(a==NULL){
			l = t->seg;
			}
			else{
				a->seg = t->seg;
			}
	//	k=k-1;
		implista(l);
	//	system ("pause");
	//	printf("TAMANHO: %i\n\n\n\n", k);
		printf("ELEMENTO ELIMINADO COM SUCESSO, PODE ENCOMENDAR O ENTERRO!");		
		}
	//}while(t!=NULL);
	free(t);
	return l;
}
