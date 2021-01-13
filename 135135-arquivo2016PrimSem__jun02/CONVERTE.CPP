#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){

  int i;
  char c;

  FILE *pontarq;  /* ponteiro do arquivo */
  
/* cria um novo arquivo de dados para gravacao apenas */
  if(( pontarq = fopen(argv[1], "r")) == NULL)
    printf("Erro ao tentar criar o arquivo: %s \n", argv[1]);

  else{
    /* ler cada caractere e grava seu equivalente maiúsculo no arquivo */
   printf("\n ****************DIGITE O TEXTO ****************\n");

    do
      putc(toupper(c = getchar()), pontarq);
    while(c != '\n');
   
    fclose(pontarq); 

  }
  printf("\nPressione qualquer tecla para sair! >>>");
  getchar();

} /* fecha o programa principal */

