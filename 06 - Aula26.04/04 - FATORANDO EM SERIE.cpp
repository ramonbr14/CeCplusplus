#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

using namespace std;
int F[15], R[15], f, c, i;

void fatorial(){
				for(i=0;i<15;i++)
						{
							f = F[i];
							for(c=f-1;c>1;c--)
										f = f*c;		 
							R[i] = f;	
						}
			}			
void imprimir(){
				for(i=0;i<15;i++)
							cout << " "<<R[i];
				}

int main (){
	system("cls");
	char L;
	L = 'S';
	cout << "\nEXERCICIO 4 - FATORANDO EM SERIE";
	while (L=='S')
		{
			for(i=0;i<15;i++)
						{
							cout << "\nDigite um Número: ";
							cin >>F[i];
						}
			fatorial();
			imprimir();
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
