0#include <stdlib.h>
#include "ListasLineares.h"
#include <conio.h>

void preencherL(){
	for(i=0;i<valor;i++){
		L1[i] = rand() % 10;
		L2[i] = rand() % 10;
	}
}
void implistas1(){
	printf("Lista 01: ");
	for(i=0;i<valor;i++)
		printf("%8.2f", L1[i]);
	printf("\n\n");
}
void implistas2(){
		printf("Lista 02: ");
	for(i=0;i<valor;i++)
		printf("%8.2f", L2[i]);
	printf("\n\n");
}
void implistas(){
	implistas1();
	implistas2();
	system("pause");
}
//Questão 01 Verifique se L está ordenada (pode ser crescente ou decrescente)
void ordenada(){
	for(i=0;i<valor;i++){
		for(c=0;c<valor;c++){
			if(L1[c]>L1[i]){
				t = L1[c];
				L1[c] = L1[i];
				L1[i] = t;
			}
		}
	}
	for(i=0;i<valor;i++){
		for(c=0;c<valor;c++){
			if(L2[c]>L2[i]){
				t = L2[c];
				L2[c] = L2[i];
				L2[i] = t;
			}
		}
	}
	printf("LISTAS ORDENADAS COM SUCESSO!\n\n");
	implistas();		
}
//questão 02 Faça uma cópia de Lista L1 em outra L2
void copiada(){
	for(i=0;i<valor;i++){
		L2[i] = L1[i];
	}
	implistas();
	system("cls");
}
//questão 03 Faça uma cópia da Lista L1 em L2 , eliminando repetidos
void copiadaS(){
	copiada();
	//t=0;
	for(i=0;i<valor;i++){
			for(c=0;c<valor;c++){
				if(L1[i]==L2[i]){
					//t=t+1;
					//while(t>=2){
						L2[i] = NULL;						
					//}
				}
			}
		}
	implistas2();	
}
void invertTOL2(){
	for(i=0;i<valor;i++){
			for(c=valor;c>=0;--c){
				L2[i]=L1[c];
			}
	}
	implistas();
}
void invert(){
	for(i=0;i<valor;i++){
			for(c=valor;c>=0;--c){
				t=L1[i];
				L1[i]=L1[c];
				L1[c]=t;
			}
	}
	implistas();
}	

void intecale(){
	i=0;
	c=0;
	do{
		L3[i]=L1[c];
		i++;
		L3[i]=L2[c];
		i++;
		c++;
	}while(i<valor+valor);
	printf("Lista 03: ");
	for(i=0;i<valor;i++)
		printf("%8.2f", L3[i]);
}
void excluirEle(){
	printf("\nQual o Numero que você deseja excluir?");
	scanf("%i", &c);
	t=0;
	for(i=0;i<valor;i++){
		if(L1[i]==c){
			t=t+1;
			L1[i] = NULL;
			for(p=i;p<valor;p++){
				L1[p]=L1[p+1];
			}
		}
	}
	if(c==0){
		printf("\nESSE NUMERO NÃO ESTA NA LISTA!");
	}
	else{
		printf("\nNUMERO DEVIDADEMENTE REMOVIDO");
	}
	implistas();
}
