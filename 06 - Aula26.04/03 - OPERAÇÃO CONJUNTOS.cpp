#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main (){
	system("cls");
	char L;
	float A[5], B[5], I[5], U[10], Sub1[5], Sub2[5];
	int c, i1, i2;
	//i1 = 0;
	//i2 = 0;
	L = 'S';
	
	cout << "\n\nVETORES E MATRIZES - Exercicio 3 - OPERACAO CONJUNTOS";
	while (L=='s'||L=='S')
		{
			for(c=0;c<5;c++)
						{
							cout << "\n\nA - Digite um numero: ";
							cin >> A[c];
							cout << "\n\nB - Digite um numero: ";
							cin >> B[c];
						}
			for(c=0;c<5;c++) //Interseccão
						{
							for(i1=0;i1<5;i1++)
										{
										if(A[c]==B[i1])
													{
														I[i2] = B[i1];
														i2++;
													}
										else
													I[i2] = 0;												
										}
						} 
			i2 = 0;
			i1 = 0;
			for(c=0;c<5;c++) //UNIÃO
						{
							for(i1=0;i1<5;i1++)
										{
											if(A[c]!=B[i1])
													{
														U[i2] = A[c];
														i2++;
														U[i2] = B[i1];
														i2++;	
													}
											else
													{
														U[i2] = B[i1];
														i2++;
														i1++;
													}
									//	}
								
						}
			for(c=0;c<5;c++) //subtração A-B
						{
							Sub1[c] = A[c]-B[c];
						}
			for(c=0;c<5;c++) //subtração B-A
						{
							Sub2[c] = B[c]-A[c];
						}
			cout << "\nO conjunto INTERSECCAO DE A e B e: "; 
			for(c=0;c<5;c++)
						{
							cout << " "<<I[c] <<",";
						}
			cout << "\nO conjunto UNIÃO DE A e B e: ";
			for(c=0;c<10;c++)
						{
							cout << " "<<U[c] <<",";
						}
			cout << "\nO conjunto Subtracao DE A - B e: "; 
			for(c=0;c<5;c++)
						{
							cout << " "<<Sub1[c]<<","; 
						}
			cout << "\nO conjunto Subtacao DE B - A e: "; 
			for(c=0;c<5;c++)
						{
							cout << " "<<Sub2[c]<<","; 
						}
			for(c=0;c<5;c++)
						{
							A[c] = 0;
							B[c] = 0;
							I[c] = 0;
							Sub1[c] = 0;
							Sub2[c] = 0;
						}
			for(c=0;c<10;c++)
						{
							U[c] = 0;
						}
			cout << "\n\nDeseja Repetir? ";
			cin >> L;	
	 	}
	}
	cout << "\n\nOBRIGADO E TENHA UM BOM DIA";
	cout << "\n\n\n\n";
	cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";
	cout << "\n\n\n\n";
	system ("pause");
	return 0;
}
