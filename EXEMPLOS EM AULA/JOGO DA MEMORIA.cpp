#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <Windows.h>
using namespace std;
int c, l, z, e, op, ct, tp;
char M[4][4], X;
char V[8] = {'A','B','C','D','E','F','G','H'};

void Gerando(){
				for(l=0;l<4;l++)
							{
								for(c=0;c<4;c++)
										M[l][c] = 'Z';
						  	}		  
				for(e=0;e<8;e++)
						{
							for(z=0;z<2;z++)
										{
											do
												{
													c = rand() % 4; //cout << "\n "<<c;
													l = rand() % 4; //cout << "\n "<<l;
												}
											while(M[l][c]!='Z');
											M[l][c] = V[e];											
										}
						}
				}
void Menu(){
				cout << " JOGO DA MEMORIA DA NILCE";
				cout << "\n\n1 - INSERIR CREDITOS!";
				cout << "\n\n2 - INICIAR JOGO!";
				cout << "\n\n3 - VER PLACAR";
				cout << "\n\n0 - ENCERRAR JOGO!";
				cout << "\n\nOPCAO: ";
				cin >> op;
				system("cls");
			}
void Creditos(){
					cout << "Quantos Creditos você quer? ";
					cin >> ct;
					Menu(); 
				}
void Jogo(){
				c = 0;
				l = 0;
				e = 0;
				z = 0;
				cout << "CREDITOS"<< ct;
				if(ct==0)
					{
						cout << "\n\nVOCÊ ESTA SEM CREDITOS! \n INSIRA NOVOS CREDITOS ANTES DE JOGAR! \n";
						Menu();
					}
				else
					{
						for(l=0;l<4;l++ )  
							{
								cout << "\n";
								for(c=0;c<4;c++)
										cout <<	"    "<<M[l][c];
						  	}
						cout << "\n\nMEMORIZE, VOCE TEM 10 SEGUNDOS! \n";
						tp = 1;
						tp *= 10;				
						while(tp >=0)
								{
									tp--;
									Sleep(1000);
									cout << tp;
								}
						system("cls");
						//do
						cout << "\nAGORA DIGITE UMA LETRA DE A-H: ";
						cin >> X;
					}
				
				Menu();	
			}
void Placar()
			{
	
			}	
int main (){
	system("cls");
	ct = 0;
	op = 9;
	Gerando();
	Menu();
	while(op!=0)
			{
				switch(op)
						{
							case 1: Creditos();break;
							case 2: Jogo();break;
							case 3: Placar();break;
						}	
			}
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
