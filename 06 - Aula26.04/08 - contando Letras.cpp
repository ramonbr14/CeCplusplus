#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

using namespace std;
int main (){
	system("cls");
	char L, A[30];
	int i, c;
	L = 'S';
	
	cout << "VETORES E MATRIZES - Exercicio 08 - contando Letras";
	while (L=='S')
		{
			for(i=0;i<30;i++)
							{
								A[i] = '0';
							}
			cout << "\n\nPROGRAMA DE VERIFICAÇÃO DE LETRAS";
			cout << "\n\nEscreva(30 caracteres)";
			gets(A);
			system ("cls");
			for(i=0;i<30;i++)
							{
								A[i] = toupper(A[i]);
							}
			cout << "Escolha uma letra do Alfabeto: ";
			cin >> L;
			L = toupper(L);
			c = 0;
			for(i=0;i<30;i++)
					{
						if(A[i]==L)
								c++;
					}
			cout << "\n\nA letra "<< L << ", se repete " << c << "vezes!";
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
