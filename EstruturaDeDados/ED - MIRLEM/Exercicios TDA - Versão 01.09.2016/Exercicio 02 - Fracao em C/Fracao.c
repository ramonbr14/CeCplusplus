#include <stdio.h>
#include "Fracao.h"

void criar_Fracao(Fracao *frac, int ret_n,int ret_d){
     (*frac).numer = ret_n;
     (*frac).den = ret_d;
}

void acesso_Numerador(Fracao *frac, int ret_n){
     (*frac).numer = ret_n;
     }

void acesso_Denominador(Fracao *frac, int ret_d){
     (*frac).den = ret_d;
     }
     
void Exibir(Fracao frac){
     printf ("Esta é a fracao \n\n");
     printf ("NUMERADOR  : %i \n", frac.numer);
     printf("----------------\n");
     printf ("DENOMINADOR: %i \n", frac.den);
} 
