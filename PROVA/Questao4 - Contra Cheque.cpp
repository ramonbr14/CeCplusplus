#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

using namespace std;

int main (){
	system ("cls");
	
	char Nome [50];
	float SB, IR, SL, SM;
		
	cout << "\n\n\nBem vindo a questão 4 da prova!";
	cout << "\n\n\n\nInfome o Nome completo do Funcionario: ";
	cin.getline(Nome,50);
	cout << "\n\n\n\nInforme o Salario Bruto: R$ ";
	cin >> SB;
	cout << "\n\n\n\nInforme o valor do salario minimo atual: R$ ";
	cin >> SM;
	if(SB>(3*SM))
		{
			if(SB>(5*SM))
				{
					if(SB>(7*SM))
						{
							if(SB>(10*SM))
								{
									IR = (SB*27)/100;
									SL = SB -IR;
								}								
							else
								{
									IR = (SB*18)/100;
									SL = SB -IR;
								}
						}
					else
						{
									IR = (SB*13)/100;
									SL = SB -IR;
						}
				}
			else
					{
						IR = (SB*5)/100;
						SL = SB -IR;
					}	
		 }
	else
		{
			IR = 0;
			SL = SB -IR;
		} 
	cout << "\n\n\n************************************************************";
	cout << "\nCONTRA CHEQUE";
	cout << "\n************************************************************";
	cout << "\n\nFuncionario: "<< Nome;
	cout << "\nSalario Bruto(R$): "<<SB;
	cout << "\nImposto de Renda(R$): "<<IR;
	cout << "\nSalarioLiquido(R$): "<<SL;
	cout << "\n************************************************************";
	
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
