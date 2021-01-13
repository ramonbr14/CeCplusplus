#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <Windows.h>
using namespace std;
char L, Aviao[20][7];
int c, i, tp;
void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
void Livre(){
			for(i=0;i<20;i++)
				{
					for(c=0;c<7;c++)
								{
									if(c==3)
											Aviao[i][c] = 'C';
									else
											Aviao[i][c] = 'L';
								}
			    }//Gerando o status de cada lugar no avião.
			/*for(i=0;i<20;i++)
				{
					cout << "\n";
					for(c=0;c<7;c++)
								{
								cout << Aviao[i][c];
								}
			    }*/
}
void Temporizador(){
				tp = 1;
				tp *= 3;				
				while(tp >=0)
						{
							tp--;
							Sleep(1000);
						}
}
void Coluna(){
				switch(toupper(L))
								{
									case 'A': c=0;break;
									case 'B': c=1;break;
									case 'C': c=2;break;
									case 'D': c=4;break;
									case 'E': c=5;break;
									case 'F': c=6;break;
									default: c=7;
								}
}
void Cabeca(){
				cout << "\n****************************************************************";
				cout << "\n       RESERVA DE POLTRONAS v0.1 - BIZERRIL LINHAS AEREAS       ";
				cout << "\n****************************************************************";
}
void Menu(){
			Cabeca();
			cout << "\n\n\n1 - RESERVAR POLTRONA"; //INCLUIR
			cout << "\n2 - MUDAR RESERVA"; //ALTERAR
			cout << "\n3 - LIBERAR RESERVA"; // LIBERAR
			cout << "\n4 - EXIBIR MAPA DO AVIAO"; // MAPA
			cout << "\n0 - EXIT";
			cout << "\n\nOPCAO: ";
			cin >> c;
			system("cls");
}
void Reserva(){
				Cabeca();
				do
					{
						cout << "\nInforme a poltrona que deseja no formato(NumeroLetra): ";
						cin >> i;
						i = i-1;
						cin >> L;
						Coluna();
					}
				while(i>=22 || c==7);
				if(Aviao[i][c]=='O')
									cout << "\n\nPOLTRONA "<< Aviao[i][c] << " ja esta RESERVADA!.";
				else
						{
							Aviao[i][c] = 'O';
							cout << "\nRESERVA EFETUADA COM SUCESSO! \nAGUARDE PARA RETORNAR AO MENU!";
						}
				Temporizador();
				system("cls");		
				Menu();
}
void Mudar(){
				Cabeca();
				cout << "\nQUAL SUA POLTRONA (no formato(NumeroLetra)) ? ";
				cin >> i;
				i = i-1;
				cin >> L;
				Coluna();
				if(Aviao[i][c]=='O')
								{
									system("cls");
									Aviao[i][c] = 'L';
									Reserva();
								}
				else
						cout << "\nPOLTRONA LIVRE. Verifique a poltrona correta!";
				Temporizador();
				system("cls");
				Menu();		
}
void Liberar(){
				Cabeca();
				cout << "\nQUAL DESEJA DESFAZER A RESERVA? (no formato(NumeroLetra)):  ";
				cin >> i;
				i = i-1;
				cin >> L;
				Coluna();
				Aviao[i][c] = 'L';
				cout << "\nPOLTRONA LIBERADA COM SUCESSO! \n AGUARDE PARA VOLTAR AO MENU!";
				Temporizador();
				system("cls");
				Menu();		
}
void Mapa(){
				cout << "\t\t              AERONAVE             ";
				cout << "\n\t\t             \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB";
				cout << "\n\t\t             \xBA CABINE\xBA";
				cout << "\n\t\t             \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
				cout << "\n\n\t\t  FP  A   B   C       D   E   F";
				for(i=0;i<20;i++)
							{
								if(i<=8)
										cout << "\n\t\t  "<<i+1;
								else
										cout << "\n\t\t "<<i+1;
								for(c=0;c<7;c++)
											cout << "   "<< Aviao[i][c];
							}
				cout << "\n\n L => LIVRE!";
				cout << "\n\n O => OCUPADO!";
				cout << "\n\n C => CORREDOR";
				cout << "\n\n";
				//ASAS: não contabilizar pos um colega me ajudou!
				gotoxy (1,14);
				cout << "**************\n";
				gotoxy (1,16);
				cout << "ASA PT/PSOL\n";
				gotoxy (1,18);
				cout << "**************\n";
				gotoxy (50,14);
				cout << "**************\n";
				gotoxy (50,16);
				cout << "ASA PSDB\n";
				gotoxy (50,18);
				cout << "**************\n";
				gotoxy (1,35);
				Menu ();
		
}

int main (){
	system("cls");
	Livre();
	Menu();
	do
			{
			switch(c)
					{
						case 1: Reserva();break;
						case 2: Mudar();break;
						case 3: Liberar();break;
						case 4: Mapa();break;
						
					}
			}
	while(c>0&&c<5);	
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\nTERCEIRA AVALIAÇÃO DE ATP - QUESTAO 2";
	cout << "\n\n2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n";
	system ("pause");
	return 0;
}
