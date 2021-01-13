#include <stdlib.h>
#include <stdio.h>
#include "lista.c"


int main (void){
	
	inicLista();
	do{
		menu();
		switch(t){
			case 1 : preencherL();break;
			case 2 : consultarL();break;
			case 3 : removernaL();break;
			case 4 : ExibirL();break;
			}
		}while(t<5);
}
//cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
