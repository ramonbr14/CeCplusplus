#include <iostream> // <stdio.h>
#include <stdlib.h> //<conio.h>
using namespace std;
int main( ){
 system("cls"); //clrscr();
 float F, m, a;
 cout << "Programa da 2� Lei de Newton";
cout << "\nDigite os valores:";
cout << "\nMassa = ";  //printf("\nMassa = ");
 cin >> m;  //scanf("%f" , &m);
cout << "\nAcelera��o = ";
cin >> a;  //scanf("%f" , &a);
 F = m*a; //processamento
cout << "For�a: " << F;   //printf("\nForca: %f�, F);
cout << "\n ";
system("pause");
return 0; //a fun��o main deve retornar um valor inteiro
}
