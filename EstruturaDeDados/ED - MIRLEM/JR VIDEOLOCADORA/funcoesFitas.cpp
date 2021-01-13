
struct cadastrarFita{
	
	int dia, mes, ano, codigo; 
	float preco;
	char titulo[30], assunto[30], oscar;
};

void TelaIncFita(){
	
	fflush(stdin);
	
	cadastrarFita cadFita;	
	
	system("cls");
	FundodeTela();
	gotoxy(3,10);
	
	cout << "CODIGO: ";
	printf("%d", jGetInt("config.ini", "fitas")+1);
	
	gotoxy(17,10);
	fflush(stdin);
	cout << "OSCAR (S/N): ";
	scanf("%c", &cadFita.oscar);
	fflush(stdin);
	gotoxy(3,12);
	cout << "TITULO: ";
	gets(cadFita.titulo);
	fflush(stdin);
	gotoxy(3,14);
	cout << "ASSUNTO: ";
	gets(cadFita.assunto);
	fflush(stdin);
	gotoxy(3,16);
	cout << "DATA DA COMPRA:   /  /";
	//scanf("%d %d %d", &cadFita.dia, &cadFita.mes, &cadFita.ano);	
	gotoxy(19,16);
	scanf("%d", &cadFita.dia);
	gotoxy(22,16);
	scanf("%d", &cadFita.mes);
	gotoxy(25,16);
	scanf("%d", &cadFita.ano);
	gotoxy(32,16);
	cout << "PRECO: ";
	scanf("%f", &cadFita.preco);	
	gotoxy(1,25);
	cout << "Deseja Salvar? 1 - SIM OU 2-NAO.";
	cin >> sop;
	switch(sop){
		case 1:{

			jEditarInt("config.ini", "fitas", jGetInt("config.ini", "fitas")+1); 
			
			sprintf(jStr, FITAS, jGetInt("config.ini", "fitas"));
			switch(cadFita.oscar){
				case 'S': jCriarInt(jStr, "oscar", 1); break;
				case 's': jCriarInt(jStr, "oscar", 1); break;
				default: jCriarInt(jStr, "oscar", 0); break;
			}
		
			jCriarString(jStr, "titulo", cadFita.titulo);
			jCriarString(jStr, "assunto", cadFita.assunto);	
			jCriarInt(jStr, "dia", cadFita.dia);
			jCriarInt(jStr, "mes", cadFita.mes);
			jCriarInt(jStr, "ano", cadFita.ano);
			jCriarFloat(jStr, "preco", cadFita.preco);		
			printf("\n\nFita %s cadastrado com sucesso!!!\n\n", cadFita.titulo);
			sleep(4);
			break;
		}
		default:{
			printf("\n\nATENCAO: FITA NAO FOI SALVA!!!");
			sleep(4);
			break;
		}
	}
}

void TelaAltFita(){ 
	fflush(stdin); 
	cadastrarFita cadFita;
	system("cls");
	FundodeTela();
	gotoxy(3,6);
	cout << "Digite o Codigo da FITA que desejas alterar: ";
	scanf("%d", &cadFita.codigo);
		
	sprintf(jStr, FITAS, cadFita.codigo);
	if(!jExiste(jStr)) {
		printf("\n\nERRO: Codigo nao Existente!!!");
		sleep(4);
		//TelaInicial();		
	}
	else{	
		do{
			system("cls");
			FundodeTela();
			gotoxy(3,6);
			cout << "Qual o Dado você deseja alterar?";
			gotoxy(3,8);
			cout << "1 - TITULO";
			gotoxy(3,9);
			cout << "2 - ASSUNTO";
			gotoxy(3,10);
			cout << "3 - OSCAR";
			gotoxy(3,11);
			cout << "4 - DATA DA COMPRA";
			gotoxy(3,12);
			cout << "5 - PREÇO";
			gotoxy(1,25);
			cin >> sop;
			
			fflush(stdin);
			system("cls");
			FundodeTela();			
			gotoxy(3,6);
				
			switch (sop){
				case 1: {
					printf("ANTIGO TITULO: %s ", jGetString(jStr, "titulo"));
					gotoxy(3,7);
					printf("DIGITE O NOVO TITULO: ");
					gets(cadFita.titulo);
					gotoxy(3,10);
					jEditarString(jStr, "titulo", cadFita.titulo);
					printf("\n\nTitulo Alterado com sucesso!!!\n\n");
					sleep(4);			
		//			TelaInicial();
					break;
				}
				case 2:{
					printf("ANTIGO ASSUNTO: %s ", jGetString(jStr, "assunto"));
					gotoxy(3,7);
					printf("DIGITE O NOVO ASSUNTO: ");
					gets(cadFita.assunto);
					jEditarString(jStr, "assunto", cadFita.assunto);
					gotoxy(3,10);
					printf("\n\nASSUNTO Alterado com sucesso!!!\n\n");
					sleep(4);
					break;
				}
				case 3:{//ALTERAÇÃO DO OSCAR ESTA TRAVANDO O SISTEMA
					fflush(stdin);
					printf("DADO ANTIGO: OSCAR? %s", ((jGetInt(jStr, "oscar") == 1) ? "SIM" : "NAO"));
					gotoxy(3,7);
					fflush(stdin);
					printf("NOVO DADO: OSCAR? (S/N): ");
					scanf("%c", &cadFita.oscar);
					switch(cadFita.oscar){
						case 'S': jEditarInt(jStr, "oscar", 1); break;
						case 's': jEditarInt(jStr, "oscar", 1); break;
						default: jEditarInt(jStr, "oscar", 0); break;
					}
					gotoxy(3,10);
					printf("\n\nINFORMACAO SOBRE OSCAR Alterado com sucesso!!!\n\n");
					sleep(4);
		//			TelaInicial();
					break;
				}
				case 4:{
					printf("ANTIGA DATA: %d %d %d ", jGetInt(jStr, "dia"), jGetInt(jStr, "mes"), jGetInt(jStr, "ano"));
					gotoxy(3,7);
					printf("DIGITE A NOVA DATA: ");
					scanf("%d %d %d", &cadFita.dia, &cadFita.mes, &cadFita.ano);
					
					jEditarInt(jStr, "dia", cadFita.dia);
					jEditarInt(jStr, "mes", cadFita.mes);
					jEditarInt(jStr, "ano", cadFita.ano);
						
					gotoxy(3,10);
					printf("\n\nDATA Alterada com sucesso!!!\n\n");
					sleep(4);
		//			TelaInicial();					
					break;
				}
				case 5:{
						printf("ANTIGO PRECO: %0.2f ", jGetFloat(jStr, "preco"));
						gotoxy(3,7);
						printf("DIGITE O NOVO PRECO: ");
						scanf("%f", &cadFita.preco);
						jEditarFloat(jStr, "preco", cadFita.preco);
						gotoxy(3,10);
						printf("\n\nPRECO Alterado com sucesso!!!\n\n");
						sleep(4);
		//				TelaInicial();
						break;
				}
				default:{
						gotoxy(3,7);
						printf("\n\nOPCAO INVALIDA!!!\n\n");
						sleep(4);
						TelaInicial();							
						break;
				}
			}
			system("pause");
			system("cls");
			FundodeTela();
			gotoxy(3,6);
				
			cout << "Deseja alterar outro Dado? 1 - SIM OU 2 - NAO.";
			cin >> sop; 
		
		}while(sop==1);
	}
	system("cls");
}
void TelaExcFita(){
	cadastrarFita cadFita;
	system("cls");
	FundodeTela();
	gotoxy(3,6);
		
	cout << "Digite o Codigo da Fita para excluir: ";
	scanf("%d", &cadFita.codigo);
			
	if(!jExiste(jStr)) 
		printf("\n\nERRO: Codigo nao Existente!!!");	
	else{
		gotoxy(3,10);
		cout << "Deseja Excluir essa Fita? 1-SIM 2-NAO";
		switch(scanf("%d")){
			case 1: remove(jStr); printf("\n\nFITA EXCLUIDA COM SUCESSO!!!");  break;
			default: {
				printf("\n\nERRO: VOCE DECIDIU NAO EXCLUIR A FITA!!!");
				break;
			}
		}
	}
	sleep(4);			
}
