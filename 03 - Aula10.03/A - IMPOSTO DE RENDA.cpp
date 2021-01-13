#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system ("cls");
	
	double s, IR;
	IR = 0;
	cout << "\nExercicio A -  Imposto de Renda!";
	cout << "\nInforme o salario da pessoa: ";
	cin >> s;
	if(s>=1050)
			{	
			if(s>=2500)
				{
				if(s>=7500)
					IR = (s*25)/100;
					
				else
					IR = (s*35)/100;
				}
			else
				IR = (s*15)/100;
		 	} 
	else
		cout << "\n\nA pessoa é isenta do IR";
	
	cout << "\n\nO valor do Imposto será: R$ "<<IR;
	
	
	cout << "\n\n\n";
	system ("pause");
	return 0;
	
}
