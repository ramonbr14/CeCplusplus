//Questao C - Gerenciamento e funcões
//RAMON DOS SANTOS SILVA
//2016118970019
//TADS-ESTRUTURA DE DADOS
#include "estruturas.h"

void compilaListas(){
	//ponteiros de Aluno
	pAx = (struct Aluno*) malloc(sizeof(struct Aluno));
	fAL = (struct Aluno*) malloc(sizeof(struct Aluno));
	//ponteiros de Disciplina
	pDx = (struct Disciplina*)malloc(sizeof(struct Disciplina));
	//iDC = (struct Disciplina*)malloc(sizeof(struct Disciplina));
	fDC = (struct Disciplina*)malloc(sizeof(struct Disciplina));
	//ponteiros de Matricula (AlunoDisciplina)
	pMx = (struct AlunoDisciplina*)malloc(sizeof(struct AlunoDisciplina));
	//iMT = (struct AlunoDisciplina*)malloc(sizeof(struct AlunoDisciplina));
	fMT = (struct AlunoDisciplina*)malloc(sizeof(struct AlunoDisciplina));
}
//Inserir
void cadastraAL(){
	Aluno *nvA= (struct Aluno*) malloc(sizeof(struct Aluno));
	//nvA->dnasc = (struct Data*) malloc(sizeof(struct Data));
	system("cls");
	fundoTELA();
	gotoxy(10,7);
	cout << "MATRICULA: ";
	cin >> nvA->matricula;
	fflush(stdin);
	gotoxy(10,9);
	cout << "NOME: ";
	gets(nvA->nome);
	gotoxy(10,11);
	cout << "DATA DE NASCIMENTO Dia: ";
	gotoxy(37,11);
	cout << "do Mês: ";
    gotoxy(48,11);
    cout << "do Ano: ";
    gotoxy(34,11);
	cin >> nvA->dnasc.dia;
    gotoxy(45,11);
    cin >> nvA->dnasc.mes;
	gotoxy(56,11);
	cin >> nvA->dnasc.ano;
	fstream fio;
	fio.open("Aluno.txt",ios::ate | ios::out | ios::in);
	fio.operator<<(nvA->matricula);
	fio.close();
	if(iAL == NULL)
	{
		iAL = nvA;
		fAL = nvA;
		nvA->ppXAL = NULL;
		nvA->paXAL = NULL;
		
	}
	else
	{
		fAL->ppXAL = nvA;
		nvA->paXAL = fAL;
		nvA->ppXAL = NULL;
		fAL = nvA; 
		
		
	}
	cout << "TESTANTO SALVAMENTO DE DADOS";
	
	gotoxy(10,21);
	cout << "CADASTRO CONCLUIDO COM SUCESSO!";
	gotoxy(10,25);
	system("pause");
}

void cadastraDC(){
	Disciplina *nvD= (struct Disciplina*)malloc(sizeof(struct Disciplina));
	system("cls");
	fundoTELA();
	gotoxy(10,7);
	cout << "Codigo para disciplina:  ";
	cin >> nvD->codigo;
	fflush(stdin);
	gotoxy(10,9);
	cout << "Nome da Disciplina:  ";
	gets(nvD->nomed);
	gotoxy(10,11);
	cout << "Carga Horaria:  ";
	cin >> nvD->ch;
	if(iDC == NULL)
	{
		iDC = nvD;
		fDC = nvD;
		fDC->ppXDC = NULL;		
	}
	else
	{
		fDC->ppXDC = nvD;
		fDC = nvD;
		fDC->ppXDC = NULL;
	}
	gotoxy(10,21);
    cout << "CADASTRO REALIZADO COM SUCESSO!!!!";
	gotoxy(10,25);
    system("pause");	
}

void coletaCMT(){
	op4 = 1;
    op5 = 1;
	if(iAL == NULL || iDC == NULL){
		system("cls");
	    fundoTELA();
        gotoxy(10,7);
        cout << "LISTA VAZIA. CADASTRE UM ALUNO E UMA DISCIPLINA PRIMEIRO";
		gotoxy(10,25);
        system ("pause");
		}
	else{
		do{
		   system("cls");
	       fundoTELA();
           gotoxy(10,7);
           cout << "DIGITE A MATRÍCULA DO ALUNO";
		   cin >> al;
		   gotoxy(10,9);
		   cout << "DIGITE O CÓDIGO DA DISCIPLINA";
		   cin >> cd;
		   pAx = iAL;
		   pDx = iDC;
           while(pAx!=NULL){
				if(pAx->matricula == al){
					   op4 = 9;
                   }
                pAx = pAx->ppXAL;
           }
		   pDx = iDC;
		   while(pDx!=NULL){
                if(pDx->codigo == cd){
					    op5 = 9;
                }
			    pDx = pDx->ppXDC;
		   }
    if(op4==1||op5==1){
			gotoxy(10,11);
            cout << "ALUNO OU DISCIPLINA NÃO EXISTEM";
			gotoxy(10,12);
            cout << "Deseja Tentar de novo? 1-> SIM e 2->NÃO";
			cin >> op4;	
			}
	    }while(op4==1);
	}
}

void cadastraMT(int almat, int dcod){
	AlunoDisciplina *nvAD= (struct AlunoDisciplina*)malloc(sizeof(struct AlunoDisciplina));
	//nvAD->dtmat = (struct Data*) malloc(sizeof(struct Data));
	nvAD->alunomat = almat;
	nvAD->codDisc = dcod;
	gotoxy(10,11);
    cout << "Data da matricula Dia: ";
	gotoxy(37,11);
    cout << " do Mês: ";
	gotoxy(48,11);
    cout << " do Ano: ";
    gotoxy(34,11);
    cin >> nvAD->dtmat.dia;
    gotoxy(45,11);
    cin >> nvAD->dtmat.mes;
	gotoxy(56,11);
    cin >> nvAD->dtmat.ano;
    gotoxy(10,13);
    cout << "Qual a Media do Aluno: ";
	cin >> nvAD->media;
	fflush(stdin);
	if(nvAD->media<6)
		nvAD->situacao = 'R';
	else
		nvAD->situacao = 'A';
	if(iMT == NULL)
	{
		iMT = nvAD;
		fMT = nvAD;
		fMT->ppXMT = NULL;		
	}
	else
	{
		fMT->ppXMT = nvAD;
		fMT = nvAD;
		fMT->ppXMT = NULL;
	}
	gotoxy(10,21);
    cout << "MATRICULA REALIZADA COM SUCESSO";
    gotoxy(10,25);
    system("pause");
}
//Buscar
int cont;
void recuperaAL(){
	op6 = 9;
    cont = 0;
	system("cls");
	fundoTELA();
    gotoxy(10,7);
    if(iAL == NULL){
		cout << "LISTA VAZIA - CADASTRE NOVOS ALUNOS!";
		gotoxy(10,25);
        system ("pause");
		}
	else{
		cout << "DESEJA COMEÇAR A BUSCA PELO INICIO ou pelo FIM?";
		gotoxy(10,8);
        cout << "DIGITE I(INICIO) OU F(FIM):  ";
		cin >> op3;
		op3 = toupper(op3);
		system("cls");
	    fundoTELA();
        gotoxy(10,7);
        if(op3 == 'I'){
			cout << "CONSULTANDO ALUNO: pelo inicio";
            gotoxy(10,8);
            cout << "Digite o codigo do ALUNO: ";
			cin >> al;
			pAx = iAL;
			while(pAx!=NULL){
				if(pAx->matricula == al){
					gotoxy(10,op6);
                    cout << "ALUNO: " << pAx->nome;
					op6 = op6+1;
                    gotoxy(10,op6);
                    cout << "Dia: " << pAx->dnasc.dia;
					gotoxy(18,op6);
                    cout << "Mês: " << pAx->dnasc.mes;
					gotoxy(25,op6);
                    cout << "Ano: " << pAx->dnasc.ano;
				    cont = cont+1;
                }
			pAx = pAx->ppXAL;
			}
		}
		else{
			cout << " CONSULTANDO ALUNO: pelo fim";
            gotoxy(10,8);
            cout << "Digite o codigo do ALUNO: ";
			cin >> al;
			pAx = fAL;
			while(pAx!=NULL){
				if(pAx->matricula == al){
					gotoxy(10,9);
                    cout << "ALUNO: " << pAx->nome;
					gotoxy(10,10);
                    cout << "Dia: " << pAx->dnasc.dia;
					gotoxy(18,10);
                    cout << "Mês: " << pAx->dnasc.mes;
					gotoxy(25,10);
                    cout << "Ano: " << pAx->dnasc.ano;
					cont = cont + 1;
				}
			pAx = pAx->paXAL;
			}
		}
		gotoxy(10,21);
        if(cont != 0)
			cout << "BUSCA ENCERRADA - CADASTRO ENCONTRADO!";
		else
			cout << "BUSCA ENCERRADA - CADASTRO INEXISTENTE!!!";
	gotoxy(10,25);
    system("pause");
	}
}

void recuperaDC(){
	cont = 0;
	system("cls");
	fundoTELA();
    gotoxy(10,6);
    if(iDC == NULL){
		cout << "LISTA VAZIA - CADASTRE NOVOS CURSOS";
		gotoxy(10,25);
        system ("pause");
		}
	else{
		cout << "CONSULTANDO DISCIPLIMA";
        gotoxy(10,7);
        cout << "Digite o codigo da Disciplina: ";
		cin >> cd;
		pDx = iDC;
		while(pDx!=NULL){
			if(pDx->codigo == cd){
				cont = cont+1;
				gotoxy(10,9);
                cout << "CODIGO: " << pDx->codigo;
				gotoxy(10,10);
                cout << "CURSO: " << pDx->nomed;
				gotoxy(10,11);
                cout << "CARGA HORARIA: " << pDx->ch;
				}
			pDx = pDx->ppXDC; 
			}
		gotoxy(10,21);
        if(cont != 0)
			cout << "BUSCA ENCERRADA -  CURSO ENCONTRADO!";
		else
			cout << "CURSO INEXISTENTE!!!";
		}
	gotoxy(10,25);	
	system("pause");
	}
	
void recuperaMT(int almat, int dcod){
	cont = 0;
	system("cls");
	fundoTELA();
    gotoxy(10,6);
    if(iMT == NULL){
		cout << "LISTA VAZIA - MATRICULE UM ALUNO EM UMA DISCIPLINA";
		system ("pause");
		}
	else{
		pMx = iMT;
		while(pMx!=NULL){
		   pAx = iAL;
		   pDx = iDC;
           while(pAx->matricula!=al){
				pAx = pAx->ppXAL;
           }
		   while(pDx->codigo!=cd){
                pDx = pDx->ppXDC;
		   }
            if(pMx->alunomat == al && pMx->codDisc == cd){
				cont = cont+1;
				gotoxy(10,10);
                cout << "ALUNO: " << pAx->nome;
				gotoxy(10,11);
                cout << "CURSO: " << pDx->nomed;
				gotoxy(10,12);
                cout << "CARGA HORARIA: " << pDx->ch;
				gotoxy(10,13);
                cout << "MATRICULADO em: " << pMx->dtmat.dia << " / " << pMx->dtmat.mes << " / " << pMx->dtmat.ano;
				gotoxy(10,14);
                cout << "NOTA: " << pMx->media;
				gotoxy(10,15);
                cout << "SITUAÇÃO: ";
				if(pMx->situacao=='A')
					cout << "APROVADO!";
				else
					cout << "REPROVADO!";
			}
			pMx = pMx->ppXMT; 
			}
		gotoxy(10,21);	
		if(cont != 0)
		    cout << "BUSCA ENCERRADA! - MATRICULA ENCONTRADA";
		else
            cout << "MATRICULA DO ALUNO NESTA DISCIPLINA NÃO ENCONTRADA!";
    }
    gotoxy(10,25);
	system("pause");
	}
//Atualizar
void atualizarAL(){
	if(iAL == NULL){
		cout << "LISTA VAZIA - CADASTRE NOVOS ALUNOS!";
		gotoxy(10,25);
        system ("pause");
		}
	else{
		Aluno *nvA= (struct Aluno*) malloc(sizeof(struct Aluno));
    	system("cls");
		fundoTELA();
    	gotoxy(10,6);
    	cout << "ATUALIZANDO O ALUNO:";
    	gotoxy(10,7);
    	cout << " Digite o codigo do ALUNO: ";
		cin >> al;
		pAx = iAL;
		while(pAx!=NULL){
			if(pAx->matricula == al){
				do{
					system("cls");
                	fundoTELA();
                	gotoxy(10,6);
                	cout << "MATRICULA: " << pAx->matricula;
                	gotoxy(10,9);
                	cout << "1) ALUNO: " << pAx->nome;
					gotoxy(10,11);
                	cout << "2) DATA DE NASCIMENTO: Dia: " << pAx->dnasc.dia;
					gotoxy(41,11);
                	cout << " Mês: " << pAx->dnasc.mes;
					gotoxy(50,11);
                	cout << " Ano: " << pAx->dnasc.ano;
					gotoxy(10,14);
                	cout << "DIGITE O NUMERO DO CAMPO QUE DESEJA ALTERA.";
					gotoxy(10,15);
                	cout << "CASO NÃO QUEIRA ALTERAR DIGITE 0 : ";
					cin >> op4;
					nvA = pAx;
                	switch(op4){
						case 1: fflush(stdin);
								gotoxy(10,16);
								cout << "NOME: ";
								gets(nvA->nome);
								break;
						case 2: gotoxy(10,16);
	                        	cout << "DATA DE NASCIMENTO Dia: ";
	                        	gotoxy(37,16);
	                        	cout << "do Mês: ";
                            	gotoxy(48,16);
                            	cout << "do Ano: ";
                            	gotoxy(34,16);
	                        	cin >> nvA->dnasc.dia;
                            	gotoxy(45,16);
                            	cin >> nvA->dnasc.mes;
	                        	gotoxy(56,16);
	                        	cin >> nvA->dnasc.ano;
								break;
						default:gotoxy(10,16);
                        	    cout << "CONCLUIDO";
								gotoxy(10,25);
                            	system("pause");
                            	break;
					}
			   		pAx = nvA;
           		}while(op4!=0);
        	gotoxy(10,21);
	    	cout << "ATUALIZAÇÃO FEITA COM SUCESSO!";    
			}
		pAx = pAx->ppXAL;
		}
	gotoxy(10,25);
    system("pause");
	}
}

void atualizarDC(){
    if(iDC == NULL){
		cout << "LISTA VAZIA - CADASTRE NOVOS CURSOS";
		gotoxy(10,25);
        system ("pause");
		}
	else{
		Disciplina *nvD= (struct Disciplina*)malloc(sizeof(struct Disciplina));
    	system("cls");
		fundoTELA();
    	gotoxy(10,6);
    	cout << "ATUALIZANDO DADOS DA DISCIPLINA:";
    	gotoxy(10,7);
    	cout << " Digite o codigo da DISCIPLINA: ";
		cin >> cd;
		pDx = iDC;
		while(pDx!=NULL){
			if(pDx->codigo == cd){
				do{
					system("cls");
                	fundoTELA();
                	gotoxy(10,6);
                	cout << "CODIGO: " << pDx->codigo;
                	gotoxy(10,9);
                	cout << "1) DISCIPLINA: " << pDx->nomed;
					gotoxy(10,11);
                	cout << "2) CARGA HORARIA: " << pDx->ch;
					gotoxy(10,14);
					cout << "DIGITE O NUMERO DO CAMPO QUE DESEJA ALTERA.";
					gotoxy(10,15);
                	cout << "CASO NÃO QUEIRA ALTERAR DIGITE 0 : ";
					cin >> op4;
					nvD = pDx;
                	switch(op4){
						case 1: fflush(stdin);
								gotoxy(10,16);
								cout << "NOVO NOME DA DISCIPLINA: ";
								gets(nvD->nomed);
								break;
						case 2: gotoxy(10,16);
	                        	cout << "CARGA HORARIA: ";
	                        	cin >> pDx->ch;
                            	break;
						default:gotoxy(10,16);
                           		cout << "CONCLUIDO";
								gotoxy(10,25);
                            	system("pause");
                            	break;
					}
			   		pDx = nvD;
           		}while(op4!=0);
        	gotoxy(10,21);
	    	cout << "ATUALIZAÇÃO FEITA COM SUCESSO!";    
			}	
			pDx = pDx->ppXDC;
		}
		gotoxy(10,25);
    	system("pause");
	}
}

void atualizarMT(int almat, int dcod){
	if(iMT == NULL){
		cout << "LISTA VAZIA - MATRICULE UM ALUNO EM UMA DISCIPLINA";
		system ("pause");
		}
	else{
		AlunoDisciplina *nvAD= (struct AlunoDisciplina*)malloc(sizeof(struct AlunoDisciplina));
    	pMx = iMT;
		while(pMx!=NULL){
			do{
		    	pAx = iAL;
		   		pDx = iDC;
           		while(pAx->matricula!=al){
						pAx = pAx->ppXAL;
           		}
		   		while(pDx->codigo!=cd){
           	     		pDx = pDx->ppXDC;
		   		}
				if(pMx->alunomat == al && pMx->codDisc == cd){
					system("cls");
            		fundoTELA();
            		gotoxy(10,5);
					cout << "ATUALIZANDO DADOS DA MATRICULA";
					gotoxy(10,6);
            		cout << "CODIGO DO ALUNO: " << pAx->matricula;
            		gotoxy(10,7);
            		cout << "NOME DO ALUNO: " << pAx->nome;
            		gotoxy(10,8);
					cout << "CODIGO DO DISCIPLINA: " << pDx->codigo;
            		gotoxy(10,9);
					cout << "DISCIPLINA: " << pDx->nomed;
					gotoxy(10,10);
            		cout << "CARGA HORARIA: " << pDx->ch;
					gotoxy(10,12);
					cout << "1) MATRICULADO em: " << pMx->dtmat.dia << " / " << pMx->dtmat.mes << " / " << pMx->dtmat.ano;
					gotoxy(10,13);
					cout << "2) NOTA: " << pMx->media;
					gotoxy(10,14);
                	cout << "SITUAÇÃO: ";
					if(pMx->situacao=='A')
						cout << "APROVADO!";
					else
						cout << "REPROVADO!";
			   		gotoxy(10,20);
					cout << "DIGITE O NUMERO DO CAMPO QUE DESEJA ALTERA.";
					gotoxy(10,21);
            		cout << "CASO NÃO QUEIRA ALTERAR DIGITE 0 : ";
					cin >> op4;
					nvAD = pMx;
            		switch(op4){
							case 1: fflush(stdin);
									gotoxy(10,22);
									cout << "NOVA DATA DA MATRICULA DIA: ";
									gotoxy(41,22);
    								cout << " do Mês: ";
									gotoxy(52,22);
    								cout << " do Ano: ";
    								gotoxy(38,22);
    								cin >> nvAD->dtmat.dia;
    								gotoxy(50,22);
    								cin >> nvAD->dtmat.mes;
									gotoxy(62,22);
    								cin >> nvAD->dtmat.ano;
									break;
							case 2: gotoxy(10,22);
	                        		cout << "	NOVA MÉDIA: ";
	                        		cin >> nvAD->media;
									if(nvAD->media<6)
										nvAD->situacao = 'R';
									else
										nvAD->situacao = 'A';
                            		break;
							default:gotoxy(10,23);
                            		cout << "CONCLUIDO";
									gotoxy(10,25);
                            		system("pause");
                            		break;
					}
			   		pMx = nvAD;
				}
			}while(op4!=0);
    		gotoxy(10,21);
			cout << "ATUALIZAÇÃO FEITA COM SUCESSO!";    
			pMx = pMx->ppXMT;
		}
	gotoxy(10,25);
    system("pause");
	}
}
//Excluir

void excluirAL(){
	if(iAL == NULL){
		cout << "LISTA VAZIA - CADASTRE NOVOS ALUNOS!";
		gotoxy(10,25);
        system ("pause");
		}
	else{
		Aluno *nvA= (struct Aluno*) malloc(sizeof(struct Aluno));
		recuperaAL();
		if(cont!=0){
			pAx = iAL;
			system("cls");
    		fundoTELA();
    		gotoxy(10,5);
			cout << "ENTRADO NA EXCLUSÃO DE REGISTROS";
			gotoxy(10,5);
			cout << "Deseja Excluir o Aluno Pesquisado?";
			cout << "1 - SIM / 2 - NÃO";
			cin >> op4;
			gotoxy(10,25);
			system("pause");
			if(op4==1){
				while(pAx!=NULL){
				if(pAx->matricula==al)
					if(pAx==iAL){
						iAL=pAx->ppXAL;
						if(iAL != NULL){
							iAL->paXAL = NULL;
						}
						delete(pAx);
						pAx = iAL;
					}
					else if(pAx==fAL){
						fAL = fAL->paXAL;
						fAL->ppXAL = NULL;
						delete(pAx);
						pAx = NULL;
						}
					else{
						pAx->paXAL->ppXAL = pAx->ppXAL;
						pAx->ppXAL->paXAL = pAx->paXAL;
						nvA = pAx->ppXAL;
						delete(pAx);
						pAx=nvA;
						}
				else{
						pAx = pAx->ppXAL;
					}	
				}
			gotoxy(10,20);
			cout << "EXCLUSÃO EFETUADA COM SUCESSO";
			}
		}
			else{
					gotoxy(10,10);
					cout << "EXCLUSÃO CANCELADA!";
				}
		gotoxy(10,25);
		system("pause");
		}
	}
	
void excluirDC(){
	if(iDC == NULL){
		cout << "LISTA VAZIA - CADASTRE NOVOS CURSOS!";
		gotoxy(10,25);
        system ("pause");
		}
	else{
		Disciplina *nvD= (struct Disciplina*) malloc(sizeof(struct Disciplina));
		recuperaDC();
		nvD = NULL;
		if(cont!=0){
			pDx = iDC;
			system("cls");
    		fundoTELA();
    		gotoxy(10,5);
			cout << "ENTRADO NA EXCLUSÃO DE REGISTROS";
			gotoxy(10,5);
			cout << "Deseja Excluir A DISCIPLINA Pesquisada?";
			cout << "1 - SIM / 2 - NÃO";
			cin >> op4;
			gotoxy(10,25);
			system("pause");
			if(op4==1){
				while(pDx!=NULL){
					if(pDx->codigo==cd)
						if(pDx==iDC){
							iDC=pDx->ppXDC;
							delete(pDx);
							pDx = iDC;
						}
						else if(pDx==fDC){
							nvD->ppXDC = NULL;
							fDC = nvD;
							delete(pDx);
							pDx=NULL;
							}
						else{
								nvD->ppXDC = pDx->ppXDC;
								delete(pDx);
								pDx =  nvD->ppXDC;
							}
				else{
					nvD = pDx;
					pDx = pDx->ppXDC;
				}	
			}
			gotoxy(10,20);
			cout << "EXCLUSÃO DO CURSO EFETUADA COM SUCESSO";
			}
	}
	else{
		gotoxy(10,10);
		cout << "EXCLUSÃO DO CURSO CANCELADA!";
	}
	gotoxy(10,25);
	system("pause");
	}
}
void excluirMT(int almat, int dcod){
	if(iMT == NULL){
		gotoxy(10,6);
		cout << "LISTA VAZIA - CADASTRE NOVAS MATRICULAS!";
		gotoxy(10,25);
        system ("pause");
		}
	else{
		AlunoDisciplina *nvAD= (struct AlunoDisciplina*) malloc(sizeof(struct AlunoDisciplina));
		recuperaMT(al,cd);
		nvAD = NULL;
		if(cont!=0){
			pMx = iMT;
			system("cls");
    		fundoTELA();
    		gotoxy(10,5);
			cout << "ENTRADO NA EXCLUSÃO DE REGISTROS";
			gotoxy(10,5);
			cout << "Deseja Excluir A DISCIPLINA Pesquisada?";
			cout << "1 - SIM / 2 - NÃO";
			cin >> op4;
			gotoxy(10,25);
			system("pause");
			if(op4==1){
				while(pMx!=NULL){
					if(pMx->alunomat == al && pMx->codDisc == cd)
						if(pMx==iMT){
							iMT=pMx->ppXMT;
							delete(pMx);
							pMx = iMT;
						}
						else if(pMx==fMT){
							nvAD->ppXMT = NULL;
							fMT = nvAD;
							delete(pMx);
							pMx=NULL;
							}
						else{
								nvAD->ppXMT = pMx->ppXMT;
								delete(pMx);
								pMx =  nvAD->ppXMT;
							}
				else{
					nvAD = pMx;
					pMx = pMx->ppXMT;
				}	
			}
			gotoxy(10,20);
			cout << "EXCLUSÃO DA MATRICULA EFETUADA COM SUCESSO";
			}
	}
	else{
		gotoxy(10,10);
		cout << "EXCLUSÃO DA MATRICULA CANCELADA!";
	}
	gotoxy(10,25);
	system("pause");
	}
}

//IMPRIMIR TODA A LISTA!

void imprimiAL(){
	op6 = 9;
	if(iAL == NULL){
		cout << "LISTA VAZIA - CADASTRE NOVOS ALUNOS!";
		gotoxy(10,25);
        system ("pause");
		}
	else{
		cout << "DESEJA COMEÇAR A impressão PELO INICIO ou pelo FIM?";
		gotoxy(10,8);
        cout << "DIGITE I(INICIO) OU F(FIM):  ";
		cin >> op3;
		op3 = toupper(op3);
		system("cls");
	    fundoTELA();
        gotoxy(10,7);
        if(op3 == 'I'){
			pAx = iAL;
			while(pAx!=NULL){
					gotoxy(10,op6);
                    op6 = op6+1;
					cout << "*******************************************************************************";
					gotoxy(10,op6);
					cout << "ALUNO: " << pAx->nome;
					op6 = op6+1;
                    gotoxy(10,op6);
                    cout << "Dia: " << pAx->dnasc.dia;
					gotoxy(18,op6);
                    cout << "Mês: " << pAx->dnasc.mes;
					gotoxy(25,op6);
                    cout << "Ano: " << pAx->dnasc.ano;
				    cont = cont+1;
				    op6 = op6+2;
			pAx = pAx->ppXAL;
			}
		}
		else{
			pAx = fAL;
			cout << " CONSULTANDO ALUNO: pelo fim";
            gotoxy(10,8);
            while(pAx!=NULL){
				gotoxy(10,op6);
				op6 = op6+1;
				cout << "*******************************************************************************";
                cout << "ALUNO: " << pAx->nome;
				gotoxy(10,op6);
                cout << "Dia: " << pAx->dnasc.dia;
				gotoxy(18,op6);
                cout << "Mês: " << pAx->dnasc.mes;
				gotoxy(25,op6);
                cout << "Ano: " << pAx->dnasc.ano;
				cont = cont + 1;
				op6 = op6+2;
				}
			pAx = pAx->paXAL;
			}
		}
	op6 = op6+2;	
	gotoxy(10,op6);
	system("pause");	
	}

void imprimiDC(){
	
}
void imprimiMT(){
	
}

//SALVANDO EM ARQUIVOS

void gravALUNO(){
	
}

void gravDISCIPLINA(){
	
}


