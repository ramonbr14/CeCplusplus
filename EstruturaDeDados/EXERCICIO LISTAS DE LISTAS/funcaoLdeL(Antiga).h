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
		cout << "CADASTRAMENTO DE PARAVRAS inglês-Português";
		gotoxy(10,6);
		cout << "DIGITE UMA PALAVRA EM inglês: ";
		cout << "DIGITE UMA PALAVRA EM PORTUGUÊS: ";
		gotoxy(30,6);
		gets(palavraTi);
		gotoxy(33,6);
		gets(palavraTp);
		palavraTi[0] = toupper(palavraTi[0]);
		palavraTp[0] = toupper(palavraTp[0]);
		if(iLisE==NULL){
        	Letras *nL = (struct Letras*) malloc(sizeof(struct Letras));
			nL->letra[0] = palavraT[0];
			nL->dirLetra = NULL;
			nL->esqLetra = NULL;
			Palavras *nP = (struct Palavras*) malloc(sizeof(struct Palavras));
			fflush(stdin);
			nP->pPalavras = NULL;
			nL->pLPalavras = nP;
			strcpy(nP->ingles,palavraTi);
			strcpy(nP->portugues,palavraTp);
			AxLetra = NULL;
			gotoxy(10,20);
			cout << "PRIMEIRA LETRA E PALAVRA ADICIONADAS!";
			iLisE = nL;
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
									AxPalavra = NULL;
									AxLetra = NULL;
									gotoxy(10,10);
									cout << "PALAVRA CADASTRADA COM SUCESSO! no final da lista!";
									//system("pause");
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

/*void ordenaBS(){
	impLISTAS();
	Palavras *Ax1P = (struct Palavras*) malloc(sizeof(struct Palavras));
	Palavras *Ax2P = (struct Palavras*) malloc(sizeof(struct Palavras));
	Palavras *Ax3P = (struct Palavras*) malloc(sizeof(struct Palavras));
	cout << "\n 127 ordenaBS ";
	int c=1, tamLE = 0, tamLP = 0;
	AxLetra = iLisE;
	while(AxLetra!=NULL){
		cout << "\n 131 while(AxLetra!=NULL) ";
		anP = NULL;
		while(c!=0){
			cout << "\n 134 while(c!=0) ";
			c = 0;
			AxPalavra = AxLetra->pLPalavras;
			//imp();
			while(AxPalavra!=NULL){
				cout << "\n 138 while(AxPalavra->pPalavras!=NULL) ";
				tp = strcmp(AxPalavra->palavra,AxPalavra->pPalavras->palavra);
				if(tp==1){
					Ax1P = AxPalavra;
					cout << "\n 145 Ax1P " << Ax1P->palavra;
					Ax2P = AxPalavra->pPalavras;
					cout << "\n 147 Ax2P " << Ax2P->palavra;
					if(Ax2P->pPalavras!=NULL){
						Ax3P = Ax2P->pPalavras;	
					}
					else
						Ax3P = NULL;
					//cout << "\n 149 Ax3P " << Ax3P->palavra;
					Ax2P->pPalavras = Ax1P;
					if(Ax3P!=NULL){
						Ax1P->pPalavras = Ax3P;
					}
					else{
						Ax1P->pPalavras = NULL;
						break;
					}
					cout << "\n 154 Ax1P->palavra " << Ax1P->palavra;
					cout << "\n143 AxPalavra: " << AxPalavra->palavra;
					anP = AxPalavra;
					cout << "\n 145 anP:  " << anP->palavra;
					nP = AxPalavra->pPalavras->pPalavras;
					cout << "\n 147 nP: " << nP->palavra;
					//AxPalavra = AxPalavra->pPalavras;
					cout << "\n 149 AxPalavra: " << AxPalavra->palavra;
					AxPalavra->pPalavras = anP;
					cout << "\n 151 AxPalavra->pPalavras->palavra: " << AxPalavra->pPalavras->palavra;
					anP->pPalavras = nP;
					cout << "\n 153 anP->pPalavras->palavra: " << anP->pPalavras->palavra;
					if(c==0){
						AxLetra->pLPalavras = Ax2P;
						cout << "\n 168 AxLetra->pLPalavras->palavra " << AxLetra->pLPalavras->palavra;	
					}
					c++; 
				}
				else{
					AxPalavra = AxPalavra->pPalavras;	
				}
				cout << "\n 160 AxPalavra: " << AxPalavra->palavra;
				//AxPalavra = AxPalavra->pPalavras;
				//cout << "\n 157 AxPalavra: " << AxPalavra->palavra;
				//AxPalavra = AxPalavra->pPalavras;
				//cout << "\n 159 AxPalavra: " << AxPalavra->palavra;
				system("pause");
			}
		}
		gotoxy(10,op2);
		cout << "**************************************************";
		AxLetra = AxLetra->ppletra;						 
	}
	cout << "ORDENAÇÃO ENCERRADA!";
	gotoxy(10,op2);
	system("pause");
}

void ordenaçãoBL(){
	
	}
void pesquisaL(){
	
}*/
