#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <cstdlib>
#include <locale>
#include <string>
#include <math.h>
#include <ctype.h>
#include <Windows.h>

using namespace std;

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

int main (){
	setlocale(LC_ALL,"Portuguese");
 	float lap=4.875, bor=234.542,can=42.036,cad=8.0,fit=13.050;
 	int n=65;
	cout << "\n\n\n";
 	cout << setprecision(2);
	cout << setfill('*');
 	cout << '\n' << "Lapis    "<< setw(12) << lap;
 	cout << '\n' << "Borracha "<< setw(12) << bor;
 	cout << '\n' << "Canetas  "<< setw(12) << can;
 	cout << '\n' << "Cadernos "<< setw(12) << cad;
 	cout << '\n' << "Fita     "<< setw(12) << fit;
 	
 	cout << "\n\n\n";
 	
 	cout << '\n' << "Hexadecimal: " << hex << n;
 	cout << '\n' << "Octal		: " << oct << n;
 	cout << '\n' << "Decimal	: " << dec << n;
 	
 	cout << "\n\n";
 	cout << "\n \xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC";
 	cout << "\n \xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF";
 	
 	cout << "\n\n";
 	
 	cout << "\n\tBomDia! Shirley.";
 	cout << "Você já tomou café? \n";
 	cout << "\n\nAsolução não existe!\nNão insista";
 	cout << "Duas\tlinhas\tde\tsaída\nou\tuma?";
 	cout << "um" << '\n' << "dois" << 
 	
 	
 	

}
