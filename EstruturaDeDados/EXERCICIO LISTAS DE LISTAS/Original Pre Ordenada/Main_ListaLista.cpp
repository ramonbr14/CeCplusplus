//Main
#include "funcaoLdeL.h"
#include <locale.h>


void gravandoDados(){
     FILE *arq;
	 char nomearq[] = "ListaGrava.dat";
	 arq = fopen(nomearq,wb);
	 if(arq == NULL){
            
            
            }
     }
int main (){
	
	
    setlocale(LC_ALL,"Portuguese");
	reservaLISTA();
	system("color B0");
	int op;
	do{
		menu();
		switch(op1){
			case 1: cadastraNOLetra();break;
			case 2: /*pesquisar()*/;break;
			case 3:	impLISTAS();break;
			case 9: cout << "ENCERRANDO DICIONARIO!";break;
		}
	}while(op1!=9);
	
	system("PAUSE");
 }
