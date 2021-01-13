//Main
#include "funcaoLdeL.h"
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	reservaLISTA();
	system("color B0");
	int op;
	do{
		op = 0;
		menu();
		switch(op1){
			case 1: cadastraNOLetra();break;
			//case 2: /*pesquisar()*/;break;
			//case 3: /*pesquisar()*/;break;
			case 4:	impLISTAS();break;
			//case 5: ordenaBS();break;
			//case 6: /*ordenaSS()*/;break;
			case 9: cout << "ENCERRANDO DICIONARIO!";break;
		}
		system("pause");
	}while(op1!=9);
	
	system("PAUSE");
 }
