
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include "ListasLineares.c"

int main (void){
	preencherL();
	implistas();
	
	do{
		printf("EXERCICIO DE LISTAS LINERARES\n");
		printf("ESCOLHA A QUEST�O\n");
		printf("1. Verifique se L est� ordenada (pode ser crescente ou decrescente)\n");
		printf("2. Fa�a uma c�pia de Lista L1 em outra L2\n");
		printf("3. Fa�a uma c�pia da Lista L1 em L2 , eliminando repetidos\n");
		printf("4. Inverta L1 colocando o resultado em L2\n");
		printf("5. Inverta a pr�pria L1\n");
		printf("6. Intercale L1 com L2 gerando L3, considere L1 e L2 ordenadas\n");
		printf("7. Elimine de L1 todas as ocorr�ncias de um dado elemento, L1 est� ordenada\n");
		scanf("%i", &p);
		system("cls");
		switch(p){
			case 1: ordenada();break;
			case 2: copiada();break;
			case 3: copiadaS();break;
			case 4: invertTOL2();break;
			case 5: invert();break;
			case 6: intecale();break;
			case 7: excluirEle;break;
			default: printf("OP��O INVALIDA"); 
		}
	}while(p<8);
}
//cout << "2016118970019 - RAMON DOS SANTOS SILVA - TADS";

