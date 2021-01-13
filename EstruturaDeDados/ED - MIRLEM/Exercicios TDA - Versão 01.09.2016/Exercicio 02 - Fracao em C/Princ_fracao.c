#include <stdio.h>
#include <stdlib.h>
#include "Fracao.c"

int main (void){
    int a, b;
    Fracao fracao1;
    printf("Digite o Numerador: ");
    scanf ("%i", &a);
    printf("Digite o denominador: ");
    scanf ("%i", &b);
    criar_Fracao(&fracao1,a,b);
    acesso_Numerador(&fracao1,a);
    acesso_Denominador(&fracao1,b);
    Exibir(fracao1);
    
    system("PAUSE"); 
}
//"2016118970019 - RAMON DOS SANTOS SILVA - TADS";
