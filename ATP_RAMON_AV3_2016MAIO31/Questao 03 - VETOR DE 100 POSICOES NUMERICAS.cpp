#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
using namespace std;
int Vetor[100], i, n, c;

void Gerador(){
				for(i=0;i<100;i++)
							{
								Vetor[i] = rand() % 61;
								//cout << Vetor[i];
							}
	
}
void Executar(){
					c = 0;
					do
						{
							cout << "\n\nESCOLHA UM NUMERO ENTRE 1 E 60.\n\n";
							cin >> n;
							if(n<1||n>60)
									cout << "NEGADO!";	
						}
					while(n>60||n<1);
					system ("cls");
					cout << "V = { ";
					for(i=0;i<100;i++)
									{
										if(Vetor[i]==n)
													{
														c++;
														cout << "\xBA>>"<<Vetor[i]<< "<<\xBA,  ";
													}
										else
											cout <<Vetor[i]<< ", ";	
									}
					cout << " }";
					cout <<"\n\nO NUMERO "<< n << " APARECEU  " << c << " vezes neste vetor!\n\n\n\n";
					system ("pause");					 	
}

int main (){
	system("cls");
	char L;
	L = 'S';
	
	while (L=='S')
		{
			Gerador();
			Executar();
			
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
