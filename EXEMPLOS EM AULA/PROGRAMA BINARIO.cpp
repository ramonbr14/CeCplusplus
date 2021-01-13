#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	char L;
	int N[4][4], B[4][4], c,l;
	L = 'S';
	
	cout << "\n\nPROGRAMA BINARIO";
	while (L=='s'||L=='S')
		{
			for(c=0;c<4;c++)
						{
							for (l=0;l<4;l++)
										{
											cout << "\nDigite um numero entre 0 e 256: ";
											cin >> B[l][c];
											while((B[l][c]<0)||(B[l][c]>=256))
																{
																	cout << "Valor Fora da Faixa. Digite outro: ";
																	cin >> B[l][c];	
																}
		   								}
		   				}
		   	cout << "\nA Matriz era assim: ";
		   	for(c=0;c<4;c++)
						{
							cout << "\n";
							for (l=0;l<4;l++)
											cout << " "<< B[l][c];
		   				
						}
			cout << "\n\nEm binario era fica assim: ";
			for(c=0;c<4;c++)
						{
							cout << "\n";
							for (l=0;l<4;l++)
											{
											if(B[l][c]>128)
														B[l][c] = 1;
											else
														B[l][c] = 0;
											cout << B[l][c]; 
											}
						}
			cout << "\n\nDeseja Repetir? ";
			cin >> L;	
	 	} 
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
