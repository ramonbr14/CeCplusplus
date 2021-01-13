#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
	system("cls");
	char R;
	float N1, N2, M;
	R = 'S';
	
	cout << "\n\nSLAGO-C EXERCICIO 2.7 - MEDIAS DA FACULDADE";	
	while(R=='s'||R=='S')
		{
			cout << "\n\nBom dia Digite a primeira nota do aluno: ";
			cin >> N1;
			cout << "\n\nAgora Digite a segunda nota do aluno: ";
			cin >> N2;
			M = (N1+N2)/2;
			cout << "\n\nMEDIA DO ALUNO: "<<M;
			if(M<7)
				{
					if(M<3)
						cout << "\n\nALERTA VERMELHO: REPROVADO COM LOUVOR!";
					else
						cout << "\n\nALERTA AMARELO: EM RECUPERACAO!";						
				}
			else
				cout << "\n\nSINAL VERDE: APROVADO! E PRA GLORIFICAR DE PE IGREJA!";
			
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
