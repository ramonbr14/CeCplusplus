#include <stdio.h>
#include <stdlib.h>
#include "vetorTDA.c"

int main(void){
    int q=0;
	preenchendoVETOR();        
	printf ("q = %d \n", q);
    q = SomaVETOR(vetorTDA);
    maiorVETOR(vetorTDA);
    mediaVETOR(q);

    printf("A SOMA DO VETOR E: %d \n", q);
    printf("O Maior numero DO VETOR E: %i \n", maior);
    printf("A MEDIA DO VETOR E: %i \n", resultM);
    system ("PAUSE");
    }
//"2016118970019 - RAMON DOS SANTOS SILVA - TADS";
