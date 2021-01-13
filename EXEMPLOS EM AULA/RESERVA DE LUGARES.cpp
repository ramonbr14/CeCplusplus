#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

//Funcoes do arquivo
using namespace std;
int op,l, c;
char D, L,	Lg[26][10];
void menu(){
				cout << "\nMENU DE OPCOES";
				cout << "\n1 - Reserva de lugares";
				cout << "\n2 - Liberar Lugares";
				cout << "\n3 - Exibir Mapa dos Lugares";
				cout << "\n0 - Encerrar Programa";
				cout << "\n\nDigite sua opção: "; 
				cin >> op;
				system("cls");
			}
void reserva(){
					cout << "\nDigite a Fileira entre A-Z: ";
					cin >> D;
					do
						{
							cout << "\nDigite a Coluna entre 0-9: ";
							cin >>c;
						}
					while(c>=10);
					switch (toupper(D))
						{
							case 'A': l=0; break;
							case 'B': l=1; break;
							case 'C': l=2; break;
							case 'D': l=3; break;
							case 'E': l=4; break;
							case 'F': l=5; break;
							case 'G': l=6; break;
							case 'H': l=7; break;
							case 'I': l=8; break;
							case 'J': l=9; break;
							case 'K': l=10; break;
							case 'L': l=11; break;
							case 'M': l=12; break;
							case 'N': l=13; break;
							case 'O': l=14; break;
							case 'P': l=15; break;
							case 'Q': l=16; break;
							case 'R': l=17; break;
							case 'S': l=18; break;
							case 'T': l=19; break;
							case 'U': l=20; break;
							case 'V': l=21; break;
							case 'W': l=22; break;
							case 'X': l=23; break;
							case 'Y': l=24; break;
							case 'Z': l=25; break;
						}
					if(Lg[l][c]=='R')
							cout << "LUGAR JA RESERVADO! \nPOR FAVOR VEJA O MAPA E ESCOLHA UM LUGAR LIVRE";
					else 
						{
						Lg[l][c] = 'R';
						cout << "\n\n";
						}
				}
void libera(){
					cout << "\n\nDigite a Fileira entre A-Z: ";
					cin >> D;
					do
						{
							cout << "\n\nDigite a Coluna entre 0-9: ";
							cin >>c;
						}
					while(c>=10);
					switch (toupper(D))
						{
							case 'A': l=0; break;
							case 'B': l=1; break;
							case 'C': l=2; break;
							case 'D': l=3; break;
							case 'E': l=4; break;
							case 'F': l=5; break;
							case 'G': l=6; break;
							case 'H': l=7; break;
							case 'I': l=8; break;
							case 'J': l=9; break;
							case 'K': l=10; break;
							case 'L': l=11; break;
							case 'M': l=12; break;
							case 'N': l=13; break;
							case 'O': l=14; break;
							case 'P': l=15; break;
							case 'Q': l=16; break;
							case 'R': l=17; break;
							case 'S': l=18; break;
							case 'T': l=19; break;
							case 'U': l=20; break;
							case 'V': l=21; break;
							case 'W': l=22; break;
							case 'X': l=23; break;
							case 'Y': l=24; break;
							case 'Z': l=25; break;
						}
					Lg[l][c] = 'L';
					cout << "\n\n";
				}
void mapa(){
				cout << "MAPA DO CINEMA";
				cout << "\n\n CL  0   1   2   3   4   5   6   7   8   9 ";
				for(l=0;l<26;l++)
							{
								cout << "\n ";
								switch (l)
											{
												case 0: cout << 'A'; break;
												case 1: cout << 'B'; break;
												case 2: cout << 'C'; break;
												case 3: cout << 'D'; break;
												case 4: cout << 'E'; break;
												case 5: cout << 'F'; break;
												case 6: cout << 'G'; break;
												case 7: cout << 'H'; break;
												case 8: cout << 'I'; break;
												case 9: cout << 'J'; break;
												case 10: cout << 'K'; break;
												case 11: cout << 'L'; break;
												case 12: cout << 'M'; break;
												case 13: cout << 'N'; break;
												case 14: cout << 'O'; break;
												case 15: cout << 'P'; break;
												case 16: cout << 'Q'; break;
												case 17: cout << 'R'; break;
												case 18: cout << 'S'; break;
												case 19: cout << 'T'; break;
												case 20: cout << 'U'; break;
												case 21: cout << 'V'; break;
												case 22: cout << 'W'; break;
												case 23: cout << 'X'; break;
												case 24: cout << 'Y'; break;
												case 25: cout << 'Z'; break;
										}
							for(c=0;c<10;c++)
								cout << "   "<<Lg[l][c];
						}
				cout << "\n\n L = LIBERADO!";
				cout << "\n\n R = RESERVADO!";
				cout << "\n\n";
				
			}
int main (){
	system("cls");
	for(l=0;l<26;l++)
				{
					for(c=0;c<10;c++)
						Lg[l][c] = 'L';
				}
	cout << "\n\nBEM VINDO AO PROGRAMA DE RESERVAS DE LUGARES NO  CINE TADS";
	menu();
	while(op!=0)
			{
			switch(op)
					{
						case 1: reserva();break;
						case 2: libera();break;
						case 3: mapa();break;
					}
			menu();	
			}
	cout << "\n\n";
	cout << "\n\n\nPROGRAMA ENCERRADO!!!!";
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n";
	system ("pause");
	return 0;
}
