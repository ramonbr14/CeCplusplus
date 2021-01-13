#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	char L;
	int A[2][3],ln,cl;
	L = 'S';
	
	while (L=='s'||L=='S')
		{
			
			for(ln=0;ln<2;ln++)
				{
					for(cl=0;cl<3;cl++)
						{
							if(cl=ln)
								A[ln][cl] = cl+ln;
							else
								A[ln][cl] = ln-cl;
						}
				}
			for(ln=0;ln<2;ln++)
				{
					for(cl=0;cl<3;cl++)
						cout << " "<<A[ln][cl];
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
