#include <stdio.h>
#include <stdlib.h>

typedef struct{
        int numer;
        int den;       
        }Fracao;

void criar_Fracao(Fracao *frac, int ret_n,int ret_d);
void acesso_Numerador(Fracao *frac, int ret_n);
void acesso_Denominador(Fracao *frac, int ret_d);
void Exibir(Fracao frac);

       



