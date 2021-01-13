//Main
#include "FuncaoArvoreB.h"
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	system("color B0");
	int op;
	do{
		op = 0;
		menu();
		switch(op1){
			case 1: coletaPalavras();
					adicinaArvore(palavraTp, palavraTi);
					break;
			case 2:	caminhoGalho();break;
			case 9: cout << "ENCERRANDO DICIONARIO!";break;
		}
		system("pause");
	}while(op1!=9);
	
	system("PAUSE");
 }
