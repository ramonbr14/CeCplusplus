struct sistemaMovimento {
	int codfita, diasAlugado;
	float preco;
	char cpf[20];
};

void MovimentoSaida(){
	fflush(stdin);
	FundodeTela();
	sistemaMovimento sisMov;
	gotoxy(3,6);
	cout << "Digite o CPF do Cliente: ";
	gets(sisMov.cpf);
			
	sprintf(jStr, CLIENTES, sisMov.cpf);
	if(!jExiste(jStr)) {
		gotoxy(3,25);
		printf("\n\nERRO: Cliente nao Existente!!!");
		sleep(4);
	}else{
	
		fflush(stdin);
		gotoxy(3,8);
		cout << "Digite o Codigo da fita: ";
		scanf("%d", &sisMov.codfita);
		
		sprintf(jStr, FITAS, sisMov.codfita);
		if(!jExiste(jStr)) {
			gotoxy(3,25);
			printf("\n\nERRO: Codigo da FITA nao Existente!!!");
			sleep(4);
		}
			else{
			sprintf(jStr, ALUGUEISATIVOS, sisMov.codfita);
			if(jExiste(jStr)) {
				gotoxy(3,25);
				printf("\n\nERRO: FITA ja esta ALUGADA!!!");
				sleep(4);
			}else{
				gotoxy(3,10);
				cout << "Quantos dias de aluguel? ";
				scanf("%d", &sisMov.diasAlugado);
				gotoxy(3,12);
				cout << "Preco:";
				scanf("%f", &sisMov.preco);
				gotoxy(3,14);
				fflush(stdin);
				cout << "Confirmar aluguel? 1 - SIM 2 - NAO";
				cin >> sop;
				
				switch(sop){
					case 1: {
						jEditarInt("config.ini", "alugadas", jGetInt("config.ini", "alugadas")+1); 
						sprintf(jStr, ALUGADAS, jGetInt("config.ini", "alugadas"));
						jCriarString(jStr, "cpf", sisMov.cpf);
						jCriarInt(jStr, "codfita", sisMov.codfita);
						jCriarInt(jStr, "dias", sisMov.diasAlugado);
						jCriarInt(jStr, "preco", sisMov.preco);	
			
						sprintf(jStr, ALUGUEISATIVOS, sisMov.codfita);
						jCriarString(jStr, "cpf", sisMov.cpf);
						jCriarInt(jStr, "codfita", sisMov.codfita);
						jCriarInt(jStr, "dias", sisMov.diasAlugado);
						jCriarFloat(jStr, "preco", sisMov.preco);	
						
						sprintf(jStr, RELATORIOS, sisMov.cpf);
						
						if(!jExiste(jStr)) 
							jCriarFloat(jStr, "preco", sisMov.preco);
						else	
							jEditarFloat(jStr, "preco", jGetFloat(jStr, "preco") + sisMov.preco);	
												
						gotoxy(3,25);
						printf("\n\nCadastro de aluguel feito com sucesso!!!\n\n");
						sleep(4);
						break;
					}
					default: {
						gotoxy(3,25);
						cout << "\n\nCANCELADO!";
						sleep(4);
						break;
					}
				}
			}
		}
	}
}
void MovimentoBaixa(){
	sistemaMovimento sisMov;
	FundodeTela();
	gotoxy(3,6);
	cout << "Digite o Codigo da FITA: ";
	scanf("%d", &sisMov.codfita);
			
	sprintf(jStr, ALUGUEISATIVOS, sisMov.codfita);
	if(!jExiste(jStr)) {
		printf("\n\nERRO: FITA nao Existente na lista de ALUGUEIS!!!");
		sleep(4);
		
	}
	else{ 
		
		gotoxy(3,8);
		cout << "Quantos dias passou com o cliente? ";
		scanf("%d", &sisMov.diasAlugado);
		
		gotoxy(3,10);
		if(jGetInt(jStr, "dias") < sisMov.diasAlugado){
			printf("AVISO: COBRAR MULTA POR %d DE ATRASO", sisMov.diasAlugado-jGetInt(jStr, "dias"));
		}
		else
			cout << "DEVOLUCAO DENTRO DO PRAZO";
			
		gotoxy(3,12);	
		cout << "Confirmar devolucao? 1 - SIM  2 - NAO";
		cin >> sop;
		gotoxy(3,15);
		switch(sop){
			case 1:{
				remove(jStr);
				cout << "DEVOLUCAO REGISTRADA COM SUCESSO!";	
				sleep(4);
				break;
			}
			default:{
				cout << "ERRO: DEVOLUCAO NAO REGISTRADA!";
				sleep(4);
				break;
			}
					
		}
	}
gotoxy(1,25);	
}
