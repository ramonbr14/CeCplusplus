#include <stdlib.h>
#include "lista.h"

void inicLista(){
	for(i=0;i<L;i++)
		listaRM[i] = NULL;
}

void menu(){
	printf("\n\nO que quer fazer?\n 1 - Preencher lista. \n 2 - Consultar Elemento na lista. \n 3 -  Remover Elemento da Lista. \n 4 - Lista");
	scanf("%i", &t);
}

void preencherL(){
	printf("\n Qual o Numero que você deseja inserir?");
	scanf("%i", &n);
	do{
		printf("\n Em qual posição?");
		scanf("%i", &p);
		if(p>L){
			printf("\n ERRO - POSIÇÃO INVALIDA!");
			system("pause");
		}
		else{
			listaRM[p-1] = n;
			printf("\nNUMERO INSERIDO COM SUCESSO");
			system("pause");
		}
	}while(p>L);
}
void consultarL(){
	printf("\nQual o Numero que você deseja verificar?");
	scanf("%i", &n);
	p=0;
	for(i=0;i<L;i++)
		{
			if(listaRM[i]==n){
				p=p+1;
				printf("\nPOSIÇÂO: %i", i+1);
			}
		}
	if(p==0)
		printf("\nO NUMERO NÃO SE ENCONTRA NESSA LISTA");
	else
		printf("\no Numero aparece: %i vezes nessa lista", p);
}
void removernaL(){
	printf("\nQual o Numero que você deseja excluir?");
	scanf("%i", &n);
	t=0;
	for(i=0;i<L;i++){
		if(listaRM[i]==n){
			t=t+1;
			listaRM[i]=NULL;
			for(p=i;p<L;p++){
				listaRM[p]=listaRM[p+1];
			}
		}
	}
	if(t==0){
		printf("\nESSE NUMERO NÃO ESTA NA LISTA!");
	}
	else{
		printf("\nNUMERO DEVIDADEMENTE REMOVIDO");
	}
}
void ExibirL(){
	printf("\nPOSIÇÕES         :  1 2 3 4 5 6 7 8 9 0");
	printf("\nCOM VOCÊS A LISTA: ");
	for(i=0;i<L;i++)
		if(listaRM[i]!=NULL)
			printf(" %i", listaRM[i]);
}

