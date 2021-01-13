#define CLIENTES "clientes/%s.ini"
#define FITAS "fitas/%d.ini"
#define ALUGADAS "alugueis/%d.ini"
#define ALUGUEISATIVOS "alugueisativos/%d.ini"
#define RELATORIOS "relatorios/%s.ini"

using namespace std;

void gotoxy(int x, int y);
void FundodeTela();
void TelaInicial();
void criarArquivos();
void MenuOPM();
void MenuOP();

int 
	op,
	sop
;

char 
	tp[50],
	jStr[60]
;

