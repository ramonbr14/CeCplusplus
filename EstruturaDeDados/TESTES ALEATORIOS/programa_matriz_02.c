/* programa_matriz_02.c */
#include <stdio.h>

int main (void)
{
int *piValor; /* ponteiro para inteiro */
int iVariavel = 27121975;
piValor = &iVariavel; /* pegando o endere�o de mem�ria da vari�vel */

printf ("Endereco: %d\n", piValor);
printf ("Valor : %d\n", *piValor);

//*piValor = 18011982;
printf ("Valor alterado: %d\n", iVariavel);
printf ("Endereco : %d\n", piValor);
return 0;
}
