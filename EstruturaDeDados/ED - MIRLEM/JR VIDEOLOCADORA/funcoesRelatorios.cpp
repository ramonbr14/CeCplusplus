

struct relatorios {
	
	char assunto[30], cpf;
	float valor;
};

void MovimentoRelatorios(){
	
	relatorios relat;
	
	int a = 0;
	
	DIR *dir;
	struct dirent *lsdir;
	fflush(stdin);
	
	system("cls");
	FundodeTela();
	gotoxy(3,6);
	cout << "1- GASTOS DE CADA CLIENTE";//6
	gotoxy(3,8);
	cout << "2- FITAS ALUGADAS MAIS DE UMA VEZ DO CLIENTE";//8
	gotoxy(3,10);
	cout << "3- FITAS POR ASSUNTO";//10
	gotoxy(3,12);
	cout << "4- FITAS PREMIADAS COM UM OSCAR";//10
	gotoxy(3,14);
	cout << "5- ENCERRAR/FECHAR";//12
	gotoxy(1,25);
	cin >> sop;
	
	fflush(stdin);
	system("cls");
	FundodeTela();
	gotoxy(3, 6);
				
	switch(sop){
		case 1: {
	
		   	dir = opendir("relatorios/");
		   	printf("\n");
		   	while ( ( lsdir = readdir(dir) ) != NULL) {
			 	if( (strcmp(lsdir->d_name, "..") == 1))  {
			 		char jStr2[50] = "";
			  		sprintf(jStr, "relatorios/%s", lsdir->d_name);
			   		sprintf(jStr2, "clientes/%s", lsdir->d_name);
			   			
					gotoxy(3,8+a);
					printf("Nome: %s - Gasto: %0.2f", jGetString(jStr2, "nome"), jGetFloat(jStr, "preco"));
					a++;
				}
			}
	    	closedir(dir);
	    	gotoxy(1,25);
	    	system("pause");


			break;
		}
		case 2:{
				
		
			break;
		}
		case 3:{
			printf("DIGITE O ASSUNTO PARA O RELATORIO:");
			gets(relat.assunto);
	
		   	dir = opendir("fitas/");
		   	printf("\n");
		   	while ( ( lsdir = readdir(dir) ) != NULL) {
		  	 	if( (strcmp(lsdir->d_name, "..") == 1))  {
			  		sprintf(jStr, "fitas/%s", lsdir->d_name);
			   			
					if(!strcmp(relat.assunto, jGetString(jStr, "assunto"))){	
						char jStr2[30] = "";
						gotoxy(3,8+a);
						printf("Filme: %s", jGetString(jStr, "titulo"));
						a++;
					}
				}
			}
			printf("\n\n");
	    	closedir(dir);
	    	gotoxy(1,25);
	    	system("pause");
	    		 					
			break;
		}
		case 4:{
				
		   	dir = opendir("fitas/");
		   	printf("\n");
		   	while ( ( lsdir = readdir(dir) ) != NULL) {
			 	if( (strcmp(lsdir->d_name, "..") == 1))  {
			  		sprintf(jStr, "fitas/%s", lsdir->d_name);
			   			
					if(jGetInt(jStr, "oscar") == 1){	
						char jStr2[30] = "";
						gotoxy(3,8+a);
						printf("Filme: %s", jGetString(jStr, "titulo"));
						a++;
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

