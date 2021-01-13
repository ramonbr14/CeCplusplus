#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main (){
	system("cls");
	
	float n1, n2, n3;
	cout << "\n\nEXERCICIO C - ORDENANDO OS NUMEROS";
	cout << "\n\nDigite um numero: ";
	cin >> n1;
	cout << "\n\nDigite outro numero: ";
	cin >> n2;
	cout << "\n\nDigite mais um numero: ";
	cin >> n3;
	if(n1>n2)
		{
			if(n1>n3)
				{
					if(n2>n3)
						{
						cout << "\nA ordem dos numeros e: "<<n3;
						cout << ", "<<n2;
						cout << ", "<<n1;
						}
					else 
						{
						cout << "\nA ordem dos numeros e: "<<n2;
						cout << ", "<<n3;
						cout << ", "<<n1;
						}
				}
			else
				{
				cout << "\nA ordem dos numeros e: "<<n2;
				cout << ", "<<n1;
				cout << ", "<<n3;
				}
		}
	else
		{
			if(n2>n3)
				{
				if(n1>n3)
					{
					cout << "\nA ordem dos numeros e: "<<n3;
					cout << ", "<<n1;
					cout << ", "<<n2;
					}
				else
					{
					cout << "\nA ordem dos numeros e: "<<n1;
					cout << ", "<<n3;
					cout << ", "<<n2;
					}
				}
			else
				{
				cout << "\nA ordem dos numeros e: "<<n1;
				cout << ", "<<n2;
				cout << ", "<<n3;
				}
		}
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
