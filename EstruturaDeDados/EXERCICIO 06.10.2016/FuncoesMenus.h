#include "fta.h"

//void gotoxy(int x, int y){
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
//}

void fundoTELA(){
	cout << "*******************************************************************************\n";//1
	cout << "*                             vs: 1.0                                         *\n";//2
	cout << "*                 SISTEMA ACADEMICO DO IMPERIO OUREANO                        *\n";//3
	cout << "*                                                                             *\n";//4
	cout << "*                                                                             *\n";//5	
	cout << "*                                                                             *\n";//6
	cout << "*                                                                             *\n";//7
	cout << "*                                                                             *\n";//8
	cout << "*                                                                             *\n";//9
	cout << "*                                                                             *\n";//10
	cout << "*                                                                             *\n";//11
	cout << "*                                                                             *\n";//12
	cout << "*                                                                             *\n";//13
	cout << "*                                                                             *\n";//14
	cout << "*                                                                             *\n";//15
	cout << "*                                                                             *\n";//16
	cout << "*                                                                             *\n";//17
	cout << "*                                                                             *\n";//18
	cout << "*                                                                             *\n";//19
	cout << "*                                                                             *\n";//20
	cout << "*                                                                             *\n";//21
	cout << "*                                                                             *\n";//22
	cout << "*                                                                             *\n";//23
	cout << "*******************************************************************************\n";//24
}

void menu(){
	system("cls");
	fundoTELA();
//	gotoxy(4,3);
	cout << "\n\n\nEscolha as Opções";
	cout << "\n\n01 - ALUNO";
	cout << "\n\n02 - CURSO";
	cout << "\n\n03 - MATRICULA";
	cout << "\n\n09 - ENCERRAR SISTEMA";
	cin >> t1;
}

void submenu(){
	system("cls");
	fundoTELA();
//	gotoxy(4,3);
	cout << "\n\n\nEscolha as Opções";
	cout << "\n\n01 - INCLUIR";
	cout << "\n\n02 - CONSULTAR";
	cout << "\n\n03 - EXCLUIR";
	cout << "\n\n09 - ENCERRAR SISTEMA";
	cin >> t2;
}

void opAluno(){
	
}

void opCurso(){
	
}
void opMatriculado(){
	
}
