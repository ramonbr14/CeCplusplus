#include <iostream> // <stdio.h>
#include <stdlib.h> //<conio.h>
using namespace std;
int main( ){
 system("cls"); //clrscr();
 float F, m, a;
 cout << "Programa da 2ª Lei de Newton";
cout << "\nDigite os valores:";
cout << "\nMassa = ";  //printf("\nMassa = ");
 cin >> m;  //scanf("%f" , &m);
cout << "\nAceleração = ";
cin >> a;  //scanf("%f" , &a);
 F = m*a; //processamento
cout << "Força: " << F;   //printf("\nForca: %f“, F);
cout << "\n ";
system("pause");
return 0; //a função main deve retornar um valor inteiro
}
