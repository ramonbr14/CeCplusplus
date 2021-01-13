#include "baseEstrutura.h"

void reservaLISTA(){
     gotoxy(10,25);
	 cout << "INICIALIZANDO A LISTA";
	 Palavras *Axpalavra = (struct Palavras*) malloc(sizeof(struct Palavras));
     Letras *AxLetra =  (struct Letras*) malloc(sizeof(struct Letras));
     Letras *iLisL = (struct Letras*) malloc(sizeof(struct Letras));
     Letras *fLisL = (struct Letras*) malloc(sizeof(struct Letras));
     Letras *anL = (struct Letras*) malloc(sizeof(struct Letras));
     Palavras *anP = (struct Palavras*) malloc(sizeof(struct Palavras));
     Palavras *fLisP = (struct Palavras*) malloc(sizeof(struct Palavras));
     }
int tl, tp;    
 
void cadastraNOLetra(){
        system("cls");
		fundoTELA();
		gotoxy(10,5);
		fflush(stdin);
		cout << "CADASTRAMENTO DE PARAVRAS NO DICIONARIO";
		gotoxy(10,6);
		cout << "DIGITE UMA PALAVRA: ";
		cin >> palavraT;
		palavraT[0] = toupper(palavraT[0]);
		if(iLisE==NULL){
        	Letras *nL = (struct Letras*) malloc(sizeof(struct Letras));
			nL->letra[0] = palavraT[0];
			nL->ppletra = AxLetra;
			Palavras *nP = (struct Palavras*) malloc(sizeof(struct Palavras));
			fflush(stdin);
			nP->pPalavras = NULL;
			nL->pLPalavras = nP;
			strcpy(nP->palavra,palavraT);
			AxLetra = NULL;
			gotoxy(10,20);
			cout << "PRIMEIRA LETRA E PALAVRA ADICIONADAS!";
			iLisE = nL;
			fLisE = nL;
		}
		else{
			AxLetra = iLisE;
			anL = NULL;
			while(AxLetra!=NULL){
				tl = strncmp(AxLetra->letra,palavraT,1);
				if(tl==0){
					AxPalavra = AxLetra->pLPalavras;
					anP= NULL;
					while(AxPalavra!=NULL){
						tp = strcmp(AxPalavra->palavra,palavraT);
						if(tp!=0){
							if(tp<0){
								anP = AxPalavra;
								AxPalavra = AxPalavra->pPalavras;
								if(AxPalavra==NULL){
									Palavras *nP = (struct Palavras*) malloc(sizeof(struct Palavras));
									strcpy(nP->palavra,palavraT);
									anP->pPalavras = nP;
									nP->pPalavras = NULL;
									AxPalavra = NULL;
									AxLetra = NULL;
									gotoxy(10,10);
									cout << "PALAVRA CADASTRADA COM SUCESSO! no final da lista!";
								}
							}
							else{
								Palavras *nP = (struct Palavras*) malloc(sizeof(struct Palavras));
								strcpy(nP->palavra,palavraT);
								if(anP==NULL){
									nP->pPalavras = AxLetra->pLPalavras;
									AxLetra->pLPalavras = nP;
									gotoxy(10,10);
									cout << "PALAVRA CADASTRADA COM SUCESSO!no inicio da lista";
								}
								else{
									anP->pPalavras = nP;
									nP->pPalavras = AxPalavra;
									gotoxy(10,10);
									cout << "PALAVRA CADASTRADA COM SUCESSO! no meio";
								}
								AxPalavra = NULL;
								AxLetra = NULL;
							}
						}
						else{
							gotoxy(10,10);
							cout << "PALAVRA JA EXISTE!";
							AxPalavra = NULL;
							AxLetra = NULL;
						}
					}
				}
				else{
					if(tl!=0){
						Letras *nL = (struct Letras*) malloc(sizeof(struct Letras));
						if(tl<0){
							anL = AxLetra;
							AxLetra = AxLetra->ppletra;
							if(AxLetra==NULL){
								nL->letra[0] = palavraT[0];
								nL->ppletra = NULL;
								anL->ppletra = nL;
								AxLetra = NULL;
								gotoxy(10,10);
								cout << "NOVA LETRA cadastrada com SUCESSO! no final da lista!";
							}
						}
						else{
							nL->letra[0] = palavraT[0];
							if(anL==NULL){
									nL->ppletra = AxLetra;
									iLisE = nL;
									gotoxy(10,10);
									cout << "NOVA LETRA cadastrada com SUCESSO!no inicio da lista";	
								}
								else{
									anL->ppletra= nL;
									nL->ppletra = AxLetra;
									gotoxy(10,10);
									cout << "NOVA LETRA CADASTRADA COM SUCESSO! no meio";	
								}
							AxLetra = NULL;
					}
					Palavras *nP = (struct Palavras*) malloc(sizeof(struct Palavras));
					strcpy(nP->palavra,palavraT);
					nP->pPalavras = AxPalavra;
					nL->pLPalavras = nP;
				}
			}
		}
		
	}
	gotoxy(10,25);
	system("pause");
}

void impLISTAS(){
	op2 = 5;
	system("cls");
	fundoTELA();
	gotoxy(10,op2);
	cout << "Imprimindo as listas";
	AxLetra = iLisE;
	
	while(AxLetra!=NULL){
		op2++;
		gotoxy(10,op2);
		cout << "LISTAS DE PALAVRAS DA LETRA: "<< AxLetra->letra;
		AxPalavra = AxLetra->pLPalavras;
		while(AxPalavra!=NULL){
			op2++;
			gotoxy(10,op2);
			cout << " - "<<AxPalavra->palavra;
			AxPalavra = AxPalavra->pPalavras;
		}
		op2 = op2+2;
		gotoxy(10,op2);
		cout << "**************************************************";
		AxLetra = AxLetra->ppletra;						 
	}
	gotoxy(10,op2);
	system("pause");
}
