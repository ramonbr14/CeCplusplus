#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
using namespace std;
char Texto[1000], L;
int c, i;


void Executar(){
			for(i=0;i<1000;i++)
							{
								
							}
			cout << "<<<<<<<<<<<<<<<<<<EMPRESA BOOBLE DE CONTAGEM DE PALAVRAS LTDA.>>>>>>>>>>>>>>>>>\n";
			cout << "\n\n\n\n\nPOR FAVOR SELECIONE UMA LETRA DO ALFABETO: ";
			L = getche();
			system ("cls");
			cout << "\nAGORA DIGITE O TEXTO QUE DESEJA ANALISAR. \n LEMBRE-SE DE QUE O LIMITE E DE 1000 CARACTERES CONTANDO OS ESPAÇOS.\n\n TEXTO----> ";
			cin.getline (Texto,1000);
			system ("pause");
			system ("cls");
			cout << "TEXTO DIGITADO: "<< Texto;
			}
void Analise (){
			cout << "\n\n<<<<<<<<<<<<<<<<<<EMPRESA BOOBLE DE CONTAGEM DE PALAVRAS LTDA.>>>>>>>>>>>>>>>>>\n";
			c=0;
			i=0;
			do{
				if(Texto[i]==' ')
							{
								c++;	
							}
				i=i+1;				
			}
			while(Texto[i]=='  ');
			cout << "RESULTADO: "<<c;		
}

int main (){
	system("cls"); 
	//char L;
	L = 'S';
	
	while (L=='S')
		{
			
			Executar();
			Analise();
			
			cout << "\n\nDeseja Repetir? ";
			L = getche();
			L = toupper(L);	
	 	} 
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
