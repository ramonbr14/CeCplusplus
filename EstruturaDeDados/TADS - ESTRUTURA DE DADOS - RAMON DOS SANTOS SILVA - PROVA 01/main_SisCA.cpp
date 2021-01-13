//RAMON DOS SANTOS SILVA
//2016118970019
//TADS-ESTRUTURA DE DADOS
#include "globais.h"
#include "interfaces.h"
#include "gerenciamento.h"

int main (){
	FILE *pArq;
	pArq = fopen("Aluno.txt","a");
	setlocale(LC_ALL,"Portuguese");
	system("color E0");
	compilaListas();
	do{
		menu();
		if(op1<4)
			submenu();
			if(op1==1){
				switch(op2){
					// aluno
					case 1: cadastraAL(); break;
					case 2: recuperaAL();break;
					case 3: atualizarAL();break;
					case 4: excluirAL();break;
					case 5: imprimiAL();break;
				}
			}
			if(op1==2){
				switch(op2){
					//curso
					case 1: cadastraDC();break;
					case 2: recuperaDC();break;
					case 3: atualizarDC();break;
					case 4: excluirDC();break;
				} 
			}
			if(op1==3){
				switch(op2) {
					//alunoDisciplina = matriculado
					case 1: coletaCMT(); 
							if(op4==9)
								cadastraMT(al,cd); 
							break;
					case 2: coletaCMT(); 
							if(op4==9)
								recuperaMT(al,cd);
							break;
					case 3: coletaCMT(); 
							if(op4==9)
								atualizarMT(al,cd);
							break;
					case 4: coletaCMT(); 
							if(op4==9)
								excluirMT(al,cd);
							break;
				}
			}
		if(op1>=4&&op1!=9){
			system("cls");
			fundoTELA();
			gotoxy(10,10);
			cout << "OPÇÃO INVALIDA";
			system("pause");
		}
	}while(op1!=9);
	system("cls");
	fundoTELA();
	gotoxy(10,6); 	
	cout << "OBRIGADO E TENHA UM BOM DIA";
	gotoxy(10,7);
    cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	gotoxy(10,25);
    system ("pause");
	return 0;

}
