#include "vetorTDA.h"
#include <math.h>

int c, p, t, resultM, maior;
//t = 0;
void preenchendoVETOR(){
	
    for(c=0;c<k;c++)
             {
              printf("Digite um numero: ");
              scanf ("%d", &vetorTDA[c]);
              //vetorTDA[c] = t;
              printf ("%i \n", vetorTDA[c]);
             }
}
int SomaVETOR(){
	int resultS=0;
	for(c=0; c<k; c++)
		{
			resultS = resultS + vetorTDA[c];
			printf ("%i \n", resultS);
		}
	return resultS;
}	
int maiorVETOR(){
    maior = vetorTDA[0];                  
    for (c=1;c<k;c++)
        {
         if(maior < vetorTDA[c])
                  maior = vetorTDA[c];  
        }
    return maior;
 }
int mediaVETOR(int resultS){
     //somaVETOR();
     resultM = resultS / k;
     return resultM;     
}
     

