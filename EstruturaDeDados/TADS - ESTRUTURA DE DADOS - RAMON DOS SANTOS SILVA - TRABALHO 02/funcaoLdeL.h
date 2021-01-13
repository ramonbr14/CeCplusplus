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
		gotoxy(10,9);
		fflush(stdin);
		cout << "CADASTRAMENTO DE PARAVRAS NO DICIONARIO";
		gotoxy(10,10);
		cout << "DIGITE UMA PALAVRA: ";
		gets(palavraT);
		palavraT[0] = toupper(palavraT[0]);
		if(iLisE==NULL){
        	Letras *nL = (struct Letras*) malloc(sizeof(struct Letras));
			nL->letra[0] = palavraT[0];
			nL->ppletra = AxLetra;
			Palavras *nP = (struct Palavras*) malloc(sizeof(struct Palavras));
			fflush(stdin);
			nP->pPalavras = NULL;
			nP->aPalavras = nP;
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
								anP = AxPalavra;
								AxPalavra = AxPalavra->pPalavras;
								if(AxPalavra==NULL){
									Palavras *nP = (struct Palavras*) malloc(sizeof(struct Palavras));
									strcpy(nP->palavra,palavraT);
									anP->pPalavras = nP;
									nP->pPalavras = NULL;
									nP->aPalavras = anP->aPalavras;
									AxPalavra = NULL;
									AxLetra = NULL;
									gotoxy(10,15);
									cout << "PALAVRA CADASTRADA COM SUCESSO! no final da lista!";
									//system("pause");
								}
						}
						else{
							gotoxy(10,15);
							cout << "PALAVRA JA EXISTE!";
							AxPalavra = NULL;
							AxLetra = NULL;
						}
					}
				}
				else{
					if(tl!=0){
						Letras *nL = (struct Letras*) malloc(sizeof(struct Letras));
						anL = AxLetra;
						AxLetra = AxLetra->ppletra;
							if(AxLetra==NULL){
								nL->letra[0] = palavraT[0];
								nL->ppletra = NULL;
								anL->ppletra = nL;
								AxLetra = NULL;
								gotoxy(10,15);
								cout << "NOVA LETRA cadastrada com SUCESSO! no final da lista!";
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
	op2 = 7;
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

void ordenaBS(){
	system("cls");
	fundoTELA();
	gotoxy(10,9);
	AxLetra = iLisE;
	while(AxLetra!=NULL){
		int c=1;
		while(c!=0){
			c = 0;
			AxPalavra = AxLetra->pLPalavras;
			while(AxPalavra->pPalavras!=NULL){
				tp = strcmp(AxPalavra->palavra,AxPalavra->pPalavras->palavra);
				anP = NULL;
				if(tp>0){
					strcpy(palavraT, AxPalavra->palavra);
					strcpy(AxPalavra->palavra,AxPalavra->pPalavras->palavra);
					AxPalavra = AxPalavra->pPalavras;
					strcpy(AxPalavra->palavra,palavraT); 
					c++;
				}
				else{
				AxPalavra = AxPalavra->pPalavras;
				}
			}
		}
		//gotoxy(10,29);
		//cout << "\n\nLETRA SEGUINTE";
		//system("pause");
		AxLetra = AxLetra->ppletra;						 
	}
	//gotoxy(10,15);
	//cout << "ordenando somente as letras";
	int c=1;
	Letras *nL = (struct Letras*) malloc(sizeof(struct Letras));
	while(c!=0){
		AxLetra = iLisE;
		c = 0;
		while(AxLetra->ppletra!=NULL){
			tl = strcmp(AxLetra->letra,AxLetra->ppletra->letra);
			nL = NULL;
			if(tl>0){
				strcpy(letraT, AxLetra->letra);
				anP = AxLetra->pLPalavras;
				strcpy(AxLetra->letra, AxLetra->ppletra->letra);
				AxLetra->pLPalavras = AxLetra->ppletra->pLPalavras;
				AxLetra = AxLetra->ppletra;
				strcpy(AxLetra->letra, letraT);
				AxLetra->pLPalavras = anP;
				c++;
			}
			else{
			AxLetra = AxLetra->ppletra;
			}
		}
	}
	gotoxy(10,20);
	cout << "\n\nORDENAÇÃO ENCERRADA!";
	gotoxy(10,25);
	system("pause");
}

void ordenaSS(){
	char pEL[20];
	Palavras *ender = (struct Palavras*) malloc(sizeof(struct Palavras));
	AxLetra = iLisE;
	while(AxLetra!=NULL){
		AxPalavra = AxLetra->pLPalavras;
		while(AxPalavra!=NULL){ 
				anP = AxPalavra->pPalavras;
				strcpy(pEL,AxPalavra->palavra);
				ender = NULL;
				while(anP!=NULL){
					tp = strcmp(pEL,anP->palavra);
					if(tp>0){
						ender = anP;
				}
					anP=anP->pPalavras;
				}
				if(ender!=NULL){
					strcpy(AxPalavra->palavra,ender->palavra);
					strcpy(ender->palavra,pEL);
				}
			 	AxPalavra = AxPalavra->pPalavras;
		}
		AxLetra = AxLetra->ppletra;
	}
	char lEL[1];
	AxLetra = iLisE;
	Letras *enderL = (struct Letras*) malloc(sizeof(struct Letras));
	while(AxLetra!=NULL){
		anL = AxLetra->ppletra;
		strcpy(lEL,AxLetra->letra);
		ender = AxLetra->pLPalavras;
		enderL = NULL;
		while(anL!=NULL){
				tp = strcmp(lEL,anL->letra);
				if(tp>0){
						enderL = anL;
						//strcpy(lES, anL->letra);
						//cout << "\n\nConteudo de Letra Selecionada: " << lES;
						anP = anL->pLPalavras;
				}
				anL=anL->ppletra;
		}
		if(enderL!=NULL){
				strcpy(AxLetra->letra,enderL->letra);
				AxLetra->pLPalavras = anP;
				strcpy(enderL->letra,lEL);
				enderL->pLPalavras = ender;
		}
		AxLetra = AxLetra->ppletra;
	}
	gotoxy(10,20);
	cout << "\n\nORDENAÇÃO ENCERRADA!";
	gotoxy(10,25);
	system("pause");
}
void pesquisaSEQ(){
	int c;
	system("cls");
	fundoTELA();
	gotoxy(10,7);
	cout << "PESQUISANDO PALAVRA - MODO SEQUENCIAL: ";
	gotoxy(10,8);
	cout << "DIGITE UMA PALAVRA: ";
	gets(palavraT2);
	palavraT2[0] = toupper(palavraT2[0]);
	AxLetra = iLisE;
	while(AxLetra!=NULL){
		tl = strncmp(AxLetra->letra,palavraT2,1);
		if(tl=0){
			AxPalavra = AxLetra->pLPalavras;
			while(AxPalavra!=NULL){
				tp = strcmp(AxPalavra->palavra,palavraT);
				if(tp==0){
					cout << "PALAVRA ESTA REGISTRADA";
					c = 1;
				}
				else{
					cout << "Procurando...";
					AxPalavra = AxPalavra->pPalavras;
					c=0;
				}
			}
		}
		else{
			c=0;
			}
		AxLetra = AxLetra->ppletra;	
	}
	if(c==0){
		cout << "A PALAVRA "<< palavraT2 << "esta registrada";
	}
	gotoxy(10,op2);
	system("pause");
}
