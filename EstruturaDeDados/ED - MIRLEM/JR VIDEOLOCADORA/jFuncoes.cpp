#include <stdio.h>
#include <stdlib.h> // atoi
#include <string.h>

FILE *arq;
int i;
char * pch;
FILE *arqSaida;

#define MAX_TAMVARIAVEL 20
#define MAX_TAMLINHA 50	
  	
bool jAbrirArquivo(const char link[]){
	
	arq = fopen(link, "a+");
	
	if(arq == NULL)
		return false;
		
	return true;
}

bool jExiste(const char link[]){
	
	 if (FILE * file = fopen(link, "r")){
	 	fclose(file);
	 	return true;
	 }
	 else
		return false;
}

void jCriarString(const char link[], const char nomeVariavel[], const char txt[]){

	if(!jAbrirArquivo(link)) 
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else
		fprintf(arq, "%s = %s\n", nomeVariavel, txt);
	
	fclose (arq);
}

void jCriarFloat(const char link[], const char nomeVariavel[], float num){

	if(!jAbrirArquivo(link)) 
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else
		fprintf(arq, "%s = %f\n", nomeVariavel, num);
	
	fclose (arq);
}
void jEditarFloat(const char link[], const char variavelTrocar[], float num){

	arqSaida = fopen("edit.txt", "a+");	
    arq = fopen(link, "rt");

  	bool jaEncontrado = false;
  	
	for(i = 0; !feof(arq); i++){ 
		
		char a[MAX_TAMVARIAVEL] = "", mystring[MAX_TAMLINHA]="";
		fgets(mystring, sizeof(mystring), arq); 
		
		if(!jaEncontrado) {
		
			pch = strchr(mystring,'='); 
			strncpy (a, mystring, (pch-mystring+1)-2);	
			
			if(!strcmp(a, variavelTrocar)){
				
				sprintf(a, "%s = %f\n", variavelTrocar, num);
				fputs(a, arqSaida); 
				jaEncontrado = true;
		 		continue;
			}
		}
		fputs(mystring, arqSaida); 
	}

	fclose(arq);
	fclose(arqSaida);
	
  	remove(link);
    rename("edit.txt", link);
}


void jCriarInt(const char link[], const char nomeVariavel[], int num){

	if(!jAbrirArquivo(link)) 
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else
		fprintf(arq, "%s = %d\n", nomeVariavel, num);
	
	fclose (arq);
}

void jEditarInt(const char link[], const char variavelTrocar[], int num){

	arqSaida = fopen("edit.txt", "a+");	
    arq = fopen(link, "rt");

  	bool jaEncontrado = false;
  	
	for(i = 0; !feof(arq); i++){ 
		
		char a[MAX_TAMVARIAVEL] = "", mystring[MAX_TAMLINHA]="";
		fgets(mystring, sizeof(mystring), arq); 
		
		if(!jaEncontrado) {
		
			pch = strchr(mystring,'='); 
			strncpy (a, mystring, (pch-mystring+1)-2);	
			
			if(!strcmp(a, variavelTrocar)){
				
				sprintf(a, "%s = %d\n", variavelTrocar, num);
				fputs(a, arqSaida); 
				jaEncontrado = true;
		 		continue;
			}
		}
		fputs(mystring, arqSaida); 
	}

	fclose(arq);
	fclose(arqSaida);
	
  	remove(link);
    rename("edit.txt", link);
}

void jEditarString(const char link[], const char variavelTrocar[], const char txt[]){

	arqSaida = fopen("edit.txt", "a+");
	
    arq = fopen(link, "rt");
  	bool jaEncontrado = false;
  	
	for(i = 0; !feof(arq); i++){ 
		
		char a[MAX_TAMVARIAVEL] = "", mystring[MAX_TAMLINHA]="";
		fgets(mystring, sizeof(mystring), arq); 
		
		if(!jaEncontrado) {
		
			pch = strchr(mystring,'='); 
			strncpy (a, mystring, (pch-mystring+1)-2);	
			if(strcmp(a, variavelTrocar) == 0){
				
				sprintf(a, "%s = %s\n", variavelTrocar, txt);
				fputs(a, arqSaida); 
				jaEncontrado = true;
		 		continue;
			}
		}
		fputs(mystring, arqSaida); 
	}

	fclose(arq);
	fclose(arqSaida);
	
  	remove(link);
    rename("edit.txt", link);
}

char *jGetString(const char link[], const char variavelTrocar[]){

	arq = fopen(link, "rt");	
    static char result[50]; 
  	
	for(i = 0; !feof(arq);i++){ 

		char a[MAX_TAMVARIAVEL] = "", mystring[MAX_TAMLINHA]= "";
		
		fgets(mystring, sizeof(mystring), arq); 
		mystring[strlen(mystring) - 1] = '\0';
		pch = strchr(mystring,'='); 
		strncpy (a, mystring, (pch-mystring+1)-2);
		
		if(!strcmp(a, variavelTrocar)){
	 			 
			memmove(mystring, mystring+(pch-mystring+1)+1, 30);
			sprintf(result,"%s", mystring);
	 		break;
		}
	}
	fclose(arq);
	return result;
}

int jGetInt(const char link[], const char variavelTrocar[]){

	arq = fopen(link, "rt");
	
    static int result; 
    
	for(i = 0; !feof(arq);i++){ 

		char a[MAX_TAMVARIAVEL] = "", mystring[MAX_TAMLINHA]= "";
		
		fgets(mystring, sizeof(mystring), arq); 
		mystring[strlen(mystring) - 1] = '\0';	
		pch = strchr(mystring,'='); 
		strncpy (a, mystring, (pch-mystring+1)-2);
		
		if(strcmp(a, variavelTrocar) == 0){
	 			 
			memmove(mystring, mystring+(pch-mystring+1)+1, 30);
			result =  atoi (mystring);
	 		break;
		}
	}
	fclose(arq);
	return result;
}

float jGetFloat(const char link[], const char variavelTrocar[]){

	arq = fopen(link, "rt");
	
    static float result; 
    
	for(i = 0; !feof(arq);i++){ 

		char a[MAX_TAMVARIAVEL] = "", mystring[MAX_TAMLINHA]= "";
		
		fgets(mystring, sizeof(mystring), arq); 
		mystring[strlen(mystring) - 1] = '\0';	
		pch = strchr(mystring,'='); 
		strncpy (a, mystring, (pch-mystring+1)-2);
		
		if(strcmp(a, variavelTrocar) == 0){
	 			 
			memmove(mystring, mystring+(pch-mystring+1)+1, 30);
			result =  strtod (mystring, NULL);
	 		break;
		}
	}
	fclose(arq);
	return result;
}

