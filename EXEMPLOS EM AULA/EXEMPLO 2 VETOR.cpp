#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	char L;
	int b[5],i;
	L = 'S';
	
	while (L=='s'||L=='S')
		{
			
			for(i=0;i<5;i++)
				b[i] = pow(i,2);
					
			for(i=0;i<5;i++)
					cout <<b
					[i] << ", ";
				
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
