//Funções de Operação!
using namespace std;


void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

void mediaNotas(){
		float p1,p2,p3,p4;
		gotoxy(10,2);
			cout << "Digite as notas das 4 provas: ";
			gotoxy(10,5);
			cout << "NOTA 1: ";
			gotoxy(10,6);
			cout << "NOTA 2: ";
			gotoxy(25,5);
			cout << "NOTA 3: ";
			gotoxy(25,6);
			cout << "NOTA 4: ";
			gotoxy(18,5);
			cin >> p1;
			gotoxy(18,6);
			cin >> p2;
			gotoxy(33,5);
			cin >> p3;
			gotoxy(33,6);
			cin >> p4;
			if(p1>10||p2>10||p3>10||p4>10)
				{
					gotoxy(10,10);
					cout << "Valores das notas superiores da 10. Recomece!";
				}
			else
				{
					float media = (p1+p2+p3+p4)/4.0;
					gotoxy(10,10);
					cout << "MÉDIA: " << media;
			}
			gotoxy(20,20);
			system("pause");
			system("cls");
}			
		
