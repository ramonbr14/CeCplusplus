#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

using namespace std;
int main(){

  FILE *pontarq; 			/* define um ponteiro para a estrutura FILE */
  system("cls");

  /* abre o arquivo e faz o ponteiro apontar p/ o buffer */
  pontarq = fopen("numeros.txt", "r");

  if(pontarq == NULL)
    printf("\nErro ao abrir o arquivo");

  else{
    printf("\nO arquivo foi aberto com sucesso!");
    /* fecha o arquivo */
    fclose(pontarq);
  }
  printf("\nPressione ENTER para sair! >>>");
  getchar();

} /* fecha o programa principal */
