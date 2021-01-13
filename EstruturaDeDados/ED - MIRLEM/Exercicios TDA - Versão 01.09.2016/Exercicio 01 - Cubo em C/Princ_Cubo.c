#include <stdio.h>
//#include "Geo_cubo.h"
#include "Geo_cubo.c"

int main (void) {
         float base, largura, altura, vol, area;
         printf ("Entre com o valor da base: \n");
         scanf ("%f", &base);
         printf ("Entre com o valor da largura: \n");
         scanf ("%f", &largura);
         printf ("Entre com o valor da altura: \n");
         scanf ("%f", &altura);
         vol = vol_cubo(base, largura, altura);
         area = area_cubo(base, largura, altura);
         printf("O volume desse Cubo é: %f \n\n", vol);
         printf("A area desse Cubo é: %f \n\n", area);
         getch();
     return 0;
     }
     
//"2016118970019 - RAMON DOS SANTOS SILVA - TADS";
