//FuncaoArvoreB
#include "interfaces.h"
//#include "baseEstrutura.h"

//estruturas

using namespace std;

char palavraTp[20];
char palavraTi[20];
char letraT[1];
int tp=0, tl=0; 

struct Palavras{
	char portugues[20];
	char ingles[20];
	Palavras *pPalavras;
}*AxPalavra, *nP,*anP;

struct Letras{
	char letra[1];
	Letras *dirLetra;
	Letras *esqLetra;
	Palavras *pLPalavras;
}*pCLetra, *nL, iListE;

//Declaração de Funções

void impressaoLetras(Letras *AndeLetras);
void alocM(char pTp[20], char pTi[20]);
void alocMsoP(Letras *pCL, char pTp[20], char pTi[20]);
void adicinaArvore(char pTp[20], char pTi[20]);
void caminhoGalho();


void coletaPalavras(){
	system("cls");
	fundoTELA();
	gotoXY(10,5);
	fflush(stdin);
	cout << "Digite uma palavra em Portugues: ";
	gotoXY(10,6);
	cout << "Digite a tradução dessa palavra para inglês: ";
	gotoXY(43,5);
	gets(palavraTp);
	fflush(stdin);
	gotoXY(55,6);
	gets(palavraTi);
	palavraTp[0] = toupper(palavraTp[0]);
	palavraTi[0] = toupper(palavraTi[0]);
}

void alocM(char pTp[20], char pTi[20]){
	nL = new(Letras);
	nL->letra[0] = pTp[0];
	nL->dirLetra = NULL;
	nL->esqLetra = NULL;
	nP = new(Palavras);
	fflush(stdin);
	strcpy(nP->portugues, pTp);
	strcpy(nP->ingles, pTi);
	nP->pPalavras = NULL;
	nL->pLPalavras = nP;
}
void alocMsoP(Letras *pCL, char pTp[20], char pTi[20]){
	AxPalavra = pCL->pLPalavras;
	anP = new(Palavras);
	anP = NULL;
	while(AxPalavra!=NULL){
		tp = strcmp(pTp,AxPalavra->portugues);
		if(tp!=0){
			nP = new(Palavras);
			strcpy(nP->portugues, pTp);
			strcpy(nP->ingles, pTi);
			if(tp<0){
				anP = AxPalavra;
				AxPalavra = AxPalavra->pPalavras;
				if(AxPalavra==NULL){
					anP->pPalavras = nP; 
					nP->pPalavras = NULL;
					gotoXY(10,10);
					cout << "PALAVRA CADASTRADA COM SUCESSO! no final da lista!";
				}
			}
			else{
				if(anP==NULL){
					nP->pPalavras = pCL->pLPalavras;
					pCL->pLPalavras = nP;
					gotoXY(10,10);
					cout << "PALAVRA CADASTRADA COM SUCESSO!no inicio da lista";
			}
				else{
					anP->pPalavras = nP;
					nP->pPalavras = AxPalavra;
					gotoXY(10,10);
					cout << "PALAVRA CADASTRADA COM SUCESSO! no meio";
				}
			AxPalavra = NULL;
			}
		}
		else{
			gotoXY(10,10);
			cout << "PALAVRA JA EXISTE!";
			AxPalavra = NULL;
		}	
	}
}
 
//inserção na arvore
void adicinaArvore(char pTp[20], char pTi[20]){
	if(iListE.dirLetra==NULL){
		alocM(pTp,pTi);
		iListE.dirLetra = nL;
		pCLetra = iListE.dirLetra; 
	}
	else{
		tl = strncmp(pTp,pCLetra->letra,1);
		if(tl==0){
			alocMsoP(pCLetra, pTp, pTi);
			//break;
		}
		else if(tl<0){
				if(pCLetra->esqLetra!=NULL){
					pCLetra = pCLetra->esqLetra;
					adicinaArvore(pTp,pTi);
				}
				else{
					alocM(pTp,pTi);
					pCLetra->esqLetra = nL;
				}
		}
		else{
			if(pCLetra->dirLetra!=NULL){
				pCLetra = pCLetra->dirLetra;
				adicinaArvore(pTp,pTi);
			}
			else{
				alocM(pTp,pTi);
				pCLetra->dirLetra = nL;
			}
		}
	}
	gotoXY(10,20);
	cout << "ENCERRADO O ADICIONAMENTO!";
	gotoXY(10,25);
	system("pause");
}
void caminhoGalho(){
	system("cls");
	gotoXY(10,5);
	if(iListE.dirLetra==NULL){
		gotoXY(10,10);
		cout << "DICIONARIO VAZIO";
	}
	else{
		gotoXY(10,5);
		cout << "EXIBINDO DICIONARIO";
		impressaoLetras(iListE.dirLetra);
	}
}
void impressaoLetras(Letras *andeLetras){
	if(andeLetras!=NULL){
		cout << "\n\n\nLETRA: " << andeLetras->letra <<"\n";
		AxPalavra = andeLetras->pLPalavras;
		while(AxPalavra != NULL){
			cout << "\nPalavra em PT-BR: " << AxPalavra->portugues;
			cout << "\nPalavra em EN-US: " << AxPalavra->ingles;
			AxPalavra = AxPalavra->pPalavras;
		}
		impressaoLetras(andeLetras->esqLetra);
		impressaoLetras(andeLetras->dirLetra);
	}
}

/*void consultaDicionario(){
     cout << "Deseja encontra uma palavra em [i]nglês ou [p]ortugues? R=";
     gets(letraT);
     letraT = toupper(letraT);
     if(letraT==I){
          cout << "Enter the word you are looking for: ";
          gets(palavraTi);
          palavraTi[0] = toupper(palavraTi[0]);
     }
     else if(letraT==P){
          cout << "Digite a palavra que você procura: ";
          gets(palavraTp);
          palavraTp[0] = toupper(palavraTp[0]);
     }
     else{
         cout << "Opção Invalida!";
         cout << "Invalid Option!"; 
     }      
}
     
void procurandoDicionario(Letras *andeLetras, Palavras *pT) {
     tl = strncmp(pT,andeLetras->letra,1)
     if(tl!=0){
                 procurandoDicionario(andeLetras->esqLetra);
                 procurandoDicionario(andeLetras->esqLetra);
     }
     
     
     }*/



