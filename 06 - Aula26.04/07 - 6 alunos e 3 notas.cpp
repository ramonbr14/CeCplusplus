#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

using namespace std;
int main (){
	system("cls");
	char L;
	float N1[6], N2[6], N3[6], A[6];
	int i, c, M[6];
	L = 'S';
	
	cout << "VETORES E MATRIZES - Exercicio 07 - 6 alunos e 3 notas";
	while (L=='S')
		{
			cout << "\n\nBEM VINDO AO PROGRAMA DE NOTAS DA FACULDADE TADS";
			for(i=0;i<6;i++)
						{
							cout << "\nMatricula do aluno(NNNN): ";
							cin >> M[i];
							cout << "\nNota 01: ";
							cin >> N1[i];
							cout << "\nNota 02: ";
							cin >> N2[i];
							cout << "\nNota 03: ";
							cin >> N3[i];
							A[i] = (N1[i]+N2[i]+N3[i])/3;
							system("cls");
						}
			for(i=0;i<6;i++)
						{
							cout << "\n**************************************";
							cout << "\n*            BOLETIM DO ALUNO        *";
							cout << "\n* MATRICULA: "<< M[i] << "                    *";
							cout << "\n* MEDIA ARTIMETICA: "<<A[i]<< "                    *";
							if(A[i]>=7)
									cout << "\n* STATUS: APROVADO!          *";
							else
									cout << "\n* STATUS: REPROVADO!         *";
							cout << "****************************************";
						}
			 
			cout << "\n\nDeseja Repetir? ";
			cin >> L;
			L = toupper(L);	
	 	} 
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
