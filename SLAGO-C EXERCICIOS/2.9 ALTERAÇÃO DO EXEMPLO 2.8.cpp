#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main() {
	system ("cls");
	int n;
	char R;
	R = 'S';
	cout << "\n\nEXERCICIO 2.9: ALTERAÇÃO DO EXEMPLO 2.8.";	
	while(R=='s'||R=='S')
		{
	cout << "\n Digite um número: ";
	cin >> n;
	switch( n ) {
		case 1: putchar('A'); break;
		case 2: putchar('B');
		case 3: putchar(':');
		case 4: putchar('C'); break;
		default: cout << '*';
		case 5: putchar('D');
		}
		putchar('.');
		cout << "\n\n\nDeseja continuar? (S ou N)";
			cin >> R;
		}
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
