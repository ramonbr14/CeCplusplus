

struct consultas{
	char cpf[15];
	int codfilme;
};

void MovimentoConsulta(){
	consultas cons;
	
	int a = 0;
	DIR *dir;
	struct dirent *lsdir;
	fflush(stdin);
	system("cls");
	FundodeTela();
	gotoxy(3,6);
	cout << "1- FILMES QUE UM CLIENTE JA ALUGOU";//6
	gotoxy(3,8);
	cout << "2 - QUAIS CLIENTES ALUGARAM DETERMINADO FILME";//8
	gotoxy(3,10);
	cout << "3- QUAIS FILMES PREMIADOS COM OSCAR UM CLIENTE JA ALUGOU";//10
	gotoxy(3,12);
	cout << "4- ENCERRAR/FECHAR";//12
	gotoxy(1,25);
	cin >> sop;
	
	fflush(stdin);
	system("cls");
	FundodeTela();
	gotoxy(3, 6);
	switch(sop){
		case 1: {
			
			printf("DIGITE O CPF DO CLIENTE: ");
			gets(cons.cpf);

	    	dir = opendir("alugueis/");
	    	printf("\n");
	    	while ( ( lsdir = readdir(dir) ) != NULL) {
		  	 	if( (strcmp(lsdir->d_name, "..") == 1))  {
		   			sprintf(jStr, "alugueis/%s", lsdir->d_name);
		   			
					if(!strcmp(cons.cpf, jGetString(jStr, "cpf"))){	
						char jStr2[30] = "";
						gotoxy(3,8+a);
						sprintf(jStr2, FITAS, jGetInt(jStr, "codfita"));
						printf("Titulo: %s  - ", jGetString(jStr2, "titulo"));
						printf("Assunto: %s\n", jGetString(jStr2, "assunto"));
						a += 1;
					}
				}
			}
    		closedir(dir);
    		gotoxy(1,25);
    		system("pause");
    		break;
		}
		case 2:{
			
			printf("DIGITE O CODIGO DA FITA:");
			scanf("%d", &cons.codfilme);

	    	dir = opendir("alugueis/");
	    	printf("\n");
	    	while ( ( lsdir = readdir(dir) ) != NULL) {
		  	 	if(strcmp(lsdir->d_name, "..") == 1)  {
		   			sprintf(jStr, "alugueis/%s", lsdir->d_name);
					if(cons.codfilme == jGetInt(jStr, "codfita")){	
						char jStr2[30] = "";
						gotoxy(3,8+a);
						sprintf(jStr2, CLIENTES, jGetString(jStr, "cpf"));
						printf("Nome: %s  - ", jGetString(jStr2, "nome"));
						printf("Telefone: %s\n", jGetString(jStr2, "telefone"));
						a += 1;
						
					}
				}
			}
    		closedir(dir);
			gotoxy(1,25);		
			system("pause");
			break;
		}
		case 3:{
			printf("DIGITE O CPF DO CLIENTE: ");
			gets(cons.cpf);

	    	dir = opendir("alugueis/");
	    	printf("\n");
	    	while ( ( lsdir = readdir(dir) ) != NULL) {
		  	 	if( (strcmp(lsdir->d_name, "..") == 1))  {
		   			sprintf(jStr, "alugueis/%s", lsdir->d_name);
		   			
					if(!strcmp(cons.cpf, jGetString(jStr, "cpf"))){	
						char jStr2[30] = "";
						gotoxy(3,8+a);
						sprintf(jStr2, FITAS, jGetInt(jStr, "codfita"));
						if(jGetInt(jStr2, "oscar") == 1){
					
							printf("Titulo: %s  - ", jGetString(jStr2, "titulo"));
							printf("Assunto: %s\n", jGetString(jStr2, "assunto"));
							a+= 1;
						}
					}
				}
			}
    		closedir(dir);
    		gotoxy(1,25);
    		system("pause");			
			break;
		}
		default:{
			gotoxy(1,25);
			system("pause");
			break;
		}
	}
}
