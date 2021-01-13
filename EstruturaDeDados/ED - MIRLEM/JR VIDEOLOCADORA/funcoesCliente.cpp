
struct cadastroCliente{
	
	char nome[30], telefone[10], endereco[30], rg[15], cpf[12];
	
};

void TelaIncCliente(){
	
	fflush(stdin);
	cadastroCliente cadCliente;
	
	system("cls");
	FundodeTela();
	gotoxy(3,6);
	cout << "*PREENCHA OS CAMPOS A BAIXO\n\n";
	gotoxy(3,10);
	fflush(stdin);
	cout << "CODIGO: ";
	printf("%d", jGetInt("config.ini", "clientes")+1);
	gotoxy(17,10);
	fflush(stdin);
	cout << "TELEFONE: ";
	gets(cadCliente.telefone); //inserir linha para capiturar DO TELEFONE
	gotoxy(3,12);
	fflush(stdin);
	cout << "NOME: ";
	gets(cadCliente.nome); //inserir linha para capiturar do Nome
	gotoxy(3,14);
	fflush(stdin);
	cout << "ENDERECO: ";
	gets(cadCliente.endereco); //inserir linha para capiturar do ENDEREÇO
	gotoxy(3,16);
	fflush(stdin);
	cout << "RG: ";
	gets(cadCliente.rg); //inserir linha para capiturar do RG
	gotoxy(20,16);
	fflush(stdin);
	cout << "CPF: ";
	gets(cadCliente.cpf); //inserir linha para capiturar do CPF
	gotoxy(10,22);
	cout << "Deseja Salvar? 1 - SIM OU 2-NAO.";
	cin >> sop;  
	switch(sop){
		case 1:{			
			sprintf(jStr, CLIENTES, cadCliente.cpf);
			if(jExiste(jStr)) {
				gotoxy(3,20);
				printf("\n\nERRO: Cliente Já Existente!!!");
				Sleep(4);
			}				
			else{		
				jEditarInt("config.ini", "clientes", jGetInt("config.ini", "clientes")+1); 
				jCriarInt(jStr, "codigo", jGetInt("config.ini", "clientes"));
				jCriarString(jStr, "nome",cadCliente.nome);
				jCriarString(jStr, "telefone",cadCliente.telefone);
				jCriarString(jStr, "endereco",cadCliente.endereco);
				jCriarString(jStr, "rg",cadCliente.rg);	
				gotoxy(1,25);
				printf("\n\nCliente %s cadastrado com sucesso!!!\n\n", cadCliente.nome);
				sleep(4);
			}
			break;
		}
		default:{
			printf("\n\nATENCAO: CLIENTE NAO FOI SALVO!!!");
			sleep(4);
			//TelaInicial();				
			break;
		}			
	}
	//TelaInicial();
}

void TelaAltCliente(){
	do{
		fflush(stdin);
		cadastroCliente cadCliente;
		system("cls");
		FundodeTela();
		gotoxy(3,6);
		cout << "Digite o CPF do Cliente que desejas alterar: ";
		gets(cadCliente.cpf);
		
		sprintf(jStr, CLIENTES, cadCliente.cpf);
		
		if(!jExiste(jStr)) {
			gotoxy(3,10);
			printf("\n\nERRO: Cliente nao Existente!!!");
			sleep(4);
			//TelaInicial();
		}
		else{			
			gotoxy(3,8);
			cout << "Qual Dado você deseja alterar?";
			gotoxy(3,10);
			cout << "1 - Nome";
			gotoxy(3,11);
			cout << "2 - Endereco";
			gotoxy(3,12);
			cout << "3 - Telefone";
			gotoxy(3,13);
			cout << "4 - RG";
			gotoxy(3,14);
			cin >> sop;
			
			fflush(stdin);
			system("cls");
			FundodeTela();
				//Inserir CPF resgatado
			switch (sop){
				case 1: {
					gotoxy(3,6);
					printf("ANTIGO NOME: %s", jGetString(jStr, "nome"));
					gotoxy(3,7);
					printf("\nDIGITE O NOVO NOME: ");
					gets(cadCliente.nome);
					jEditarString(jStr, "nome", cadCliente.nome);
					gotoxy(3,10);
					printf("\n\nNome Alterado com sucesso!!!\n\n");
					sleep(4);
					//TelaInicial();
					break;
				}
				case 2:{
					gotoxy(3,6);
					printf("ANTIGO ENDERECO: %s", jGetString(jStr, "nome"));
					gotoxy(3,7);
					printf("\nDIGITE O NOVO ENDERECO: ");
					gets(cadCliente.endereco);
					jEditarString(jStr, "endereco", cadCliente.endereco);
					gotoxy(3,20);
					printf("\n\Endereco Alterado com sucesso!!!\n\n");
					sleep(4);
					//TelaInicial();
					break;
				}
				case 3:{
					gotoxy(3,6);
					printf("ANTIGO TELEFONE: %s", jGetString(jStr, "telefone"));
					gotoxy(3,7);
					printf("\nDIGITE O NOVO TELEFONE: ");
					gets(cadCliente.telefone);
					jEditarString(jStr, "rg", cadCliente.telefone);
					gotoxy(3,10);
					printf("\n\nTelefone Alterado com sucesso!!!\n\n");
					sleep(4);
					//TelaInicial();
					break;
				}
				case 4:{
					gotoxy(3,6);
					printf("ANTIGO RG: %s", jGetString(jStr, "rg"));
					gotoxy(3,7);
					printf("\nDIGITE O NOVO RG: ");
					gets(cadCliente.telefone);
					gotoxy(3,10);
					jEditarString(jStr, "rg", cadCliente.telefone);
					printf("\n\nRG Alterado com sucesso!!!\n\n");
					sleep(4);
					//TelaInicial();					
					break;
				}
				default:{
					gotoxy(3,6);
					printf("\n\nOPCAO INVALIDA!!!\n\n");
					sleep(4);
					//TelaInicial();							
					break;
				}
			}
			system("pause");//substituir por sleep
			system("cls");
			
			FundodeTela();
			gotoxy(3,6);
			cout << "Deseja alterar outro Dado? 1 - SIM OU 2 - NAO. ";
			cin >> sop; 
		}
	
	}while(sop==1);

	system("cls");
	//TelaInicial();
}

void TelaExcCliente(){
	
	fflush(stdin);
	cadastroCliente cadCliente;
	system("cls");
	FundodeTela();			

	gotoxy(3,6);
	printf("DIGITE O CPF DO CLIENTE QUE DESEJAS EXCLUIR: ");
	gets(cadCliente.cpf);
			
	sprintf(jStr, CLIENTES, cadCliente.cpf);
	
	if(!jExiste(jStr)) {
		gotoxy(3,10);
		printf("\n\nERRO: Cliente nao Existente!!!");
		sleep(4);
		
	}
	else{
	
		gotoxy(20,16);
		cout << "Deseja Excluir esse cliente? 1-SIM 2- NAO";
		cin >>sop;
		switch(sop){
			case 1:{
				cout << "\n\nCLIENTE EXCUIDO COM SUCESSO!!!";
				remove(jStr);
				sleep(4);
	//			TelaInicial();	
				break;
			}
			default:{
				cout << "\n\nERRO: CLIENTE NÃO FOI EXCLUIDO!!!";
				sleep(4);
	//			TelaInicial();	
				break;
			}	
		}
	}	
}
