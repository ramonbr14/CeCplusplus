#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int pot2(int num){
    return num*num;
}
int main(int argc, char *argv[]){
  int i, num;
  
  FILE *pontarq;  /* ponteiro do arquivo */

  char linha[255]; /* linha do arquivo */

  system("pause");
  if(( pontarq = fopen(argv[1], "numeros")) == NULL)
    printf("Erro ao abrir o arquivo: %s \n", argv[1]);

  else{
    /* le e exibe cada linha do arquivo */
	printf("\nElevando o numero ao quadrado ..........\n");
    while(fgets(linha, sizeof(linha), pontarq)){
      //fputs(linha, stdout);
	  num = atoi(linha);
	  printf("%d -> %d\n", num, pot2(num));
    }
    fclose(pontarq);  /* fechar o arquivo */
  }
  printf("\nPressione qualquer tecla para sair! >>>");
  getchar();

} /* fecha o programa principal */
