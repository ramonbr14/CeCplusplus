#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	char L;
	int c[3],i;
	L = 'S';
	
	while (L=='s'||L=='S')
		{
			
			for(i=0;i<3;i++)
				{
					cout << "\n\nDigite um valor: ";
					cin >> c[i];
				}
			for(i=0;i<3;i++)
					cout <<c[i] << ", ";
				
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
