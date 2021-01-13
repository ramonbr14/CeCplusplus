#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int opcao;

void titulo (){
	cout << "\n\n\n****Calculadora****";
			}
			
void soma (int a, int b){
			cout << (a+b);
			}
			
void mult (int a, int b){
			cout << (a*b);	
			}
void subt (int a, int b){
			cout << (a-b);
			}
void divi (int a, int b){
			cout << (a/b);
			}
void menu (){
	cout << "\n1 - SOMA";
	cout << "\n2 - MULTIPLICACAO";
	cout << "\n3 - SUBTRAÇÃO";
	cout << "\n4 - DIVISÃO";
	cout << "\n5 - SAIR DO PROGRAMA";
	cout << "\n\n\nEscolha uma opcao: ";
	cin >> opcao;	 
}			
			
int main(){
	int n1, n2;
	do 
		{
			cout << "\n\n";
			titulo ();
			menu ();
			if(opcao>=1&&opcao<=4)
				{
					cout << "\n\nDigite o primeiro valor: ";
					cin >> n1;
					cout << "\n\nDigite o segundo valor: ";
					cin >> n2;
					if(opcao==1)
							soma (n1,n2);
					else
						{
							if(opcao==2)
									mult (n1,n2);
							else
								{
									if(opcao==3)
										subt(n1,n2);
									else
										divi(n1,n2);
								}	
						}
				}
			else
				opcao = 5;
		}
		while (opcao>=1&&opcao<=4);
	
		
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	
}

