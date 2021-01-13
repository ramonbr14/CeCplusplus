//Nome do programa: HistoricoEscolarRegistro.cc
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip.h>


//definição da estrutura de um registro
struct HistoricoEscolar {
    char	  disciplina[30], aluno[50], situacao;
    float  notaBim1, notaBim2, notaBim3, notaBim4, mediaFinal;
    int	  ano, faltas;
};

int main()
{

    HistoricoEscolar ficha2005008; 	//declaração da variável do tipo HistoricoEscolar

    clrscr();

    //Entrada dos dados da ficha
    cout << "\nInforme os dados da ficha do aluno";
    cout << "\nDisciplina: ";
    gets(ficha2005008.disciplina);
    cout << "\nAluno: ";
    gets(ficha2005008.aluno);
    cout << "\nNotas Bimestrais: ";
    cout << "\n  -> Primeira: ";
    cin >> ficha2005008.notaBim1;
    cout << "\n  -> Segunda: ";
    cin >> ficha2005008.notaBim2;
    cout << "\n  -> Terceira: ";
    cin >> ficha2005008.notaBim3;
    cout << "\n  -> Quarta: ";
    cin >> ficha2005008.notaBim4;
    cout << "\nN£mero de Faltas: ";
    cin >> ficha2005008.faltas;
    cout << "\nAno: ";
    cin >> ficha2005008.ano;

    //Processamento da m‚dia e da situa‡Æo do aluno na disciplina
    ficha2005008.mediaFinal=(ficha2005008.notaBim1 +ficha2005008.notaBim2+ficha2005008.notaBim3+ficha2005008.notaBim4)/4;
    if(ficha2005008.mediaFinal>=5)
        ficha2005008.situacao ='A';
    else
        ficha2005008.situacao ='R';

    //Sa¡da dos dados da ficha
    cout << "\n*************  HISTORICO ESCOLAR *************\n";
    cout << "\nDisciplina: " <<   ficha2005008.disciplina;
    cout << "\nAluno: " <<   ficha2005008.aluno;
    cout << "\n -----  Notas Bimestrais  -----";
    printf("\nPrimeira: \t %2.1f", ficha2005008.notaBim1);
    printf("\nSegunda:  \t %2.1f", ficha2005008.notaBim2);
    printf("\nTerceira: \t %2.1f", ficha2005008.notaBim3);
    printf("\nQuarta:   \t %2.1f", ficha2005008.notaBim4);
    printf("\nMedia Final: \t %2.1f", ficha2005008.mediaFinal);
    if(ficha2005008.situacao=='A')
        cout << "\nSituacao: Aprovado";
    else
        cout << "\nSituacao: Reprovado";
    cout << "\nNumero de Faltas: " << ficha2005008.faltas;
    cout << "\nAno: " << ficha2005008.ano;

    getchar();
    return 0;
}
