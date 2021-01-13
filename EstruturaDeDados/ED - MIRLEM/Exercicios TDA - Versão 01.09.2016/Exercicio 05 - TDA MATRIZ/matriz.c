#include <stdio.h>
#include "matriz.h"

void prencherMT(){
	for (i=0;i<L;i++)
			{
				for (k=0;k<C;k++){
					printf("\nDigite Um numero: ");
					scanf("%i", &matrizA[i][k]);
				}
					
			}
	for (i=0;i<L;i++)
			{
				for (k=0;k<C;k++){
					printf("\nDigite Um numero: ");
					scanf("%i", &matrizB[i][k]);
				}
				
			}
	system("cls");
}
void somaMT(){
	for(i=0;i<L;i++)
			{
				for(k=0;k<C;k++)
					matrizRS[i][k] = matrizA[i][k] + matrizB[i][k];
			}
}
void multMT(){
	for(i=0;i<L;i++){
			int v1=0, v2=0;		
			for(i=0;i<C;i++){
				v2 = (matrizA[i][k]*matrizB[i][k])+v1;
				v1 = v2;
			}
			matrizRM[ii][kk] = v1;
	}
}
void inveMT(){
	for (i=0;i<L;i++)
			{
				for (k=0;k<C;k++){
					matrizARI[ii][kk] = matrizA[i][k];
					kk--;
				}
				ii--;
			}
	for (i=0;i<L;i++)
			{
				for (k=0;k<C;k++){
					matrizBRI[ii][kk] = matrizB[i][k];
					kk--;
				}
				ii--;
			}
}
void ImpSoma(){
	printf("\n SOMA DA MATRIZ A\n");
	for (i=0;i<L;i++)
			{
				printf(" \n");
				for (k=0;k<C;k++)
						printf(" %i", matrizRS[i][k]);
			}
			
}

void ImpMult(){
	printf("\n MULTIPLICACAO DA MATRIZ A\n");
	for (i=0;i<L;i++)
			{
				printf("\n");
				for (k=0;k<C;k++)
						printf(" %i", matrizRM[i][k]);
			}
}
void ImpInver(){
	printf("\n INVERSO DA MATRIZ A\n");
	for (i=0;i<L;i++)
			{
				for (k=0;k<C;k++)
						printf(" %i", matrizARI[i][k]);
			printf("\n");
			}
	printf("\n INVERSO DA MATRIZ B\n");
	for (i=0;i<L;i++)
			{
				for (k=0;k<C;k++)
						printf(" %i", matrizBRI[i][k]);
			printf("\n");
			}
}
