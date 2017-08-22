#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;



struct BandasMtLoucas{
	char banda[20];
	char tpmusica[11];
	int  integrantes;
	int  ranking;
};

static BandasMtLoucas bandas[5];
static int i;

void preenche(){
	int i;
	
		for(i=0; i<5;i++){
		cout << "Digite o nome da banda: ";
		cin >> bandas[i].banda;
		system("cls");
		cout << "digite o tipo de musica: \n obs: funk nao e musica.";
		cin >> bandas[i].tpmusica;
		system("cls");
		cout << "digite o numero de integrantes: ";
		cin >> bandas[i].integrantes;
		system("cls");
		cout << "digite o ranking pessoal da sua banda favorita: ";
		cin >> bandas[i].ranking;
		system("cls");
	
	}
}

void Selecaonumero(){
		int TheChosenOne;
		
		cout << "Qual eh grande amigo diz ai um numero de 1 a 5: ";
		cin >>  TheChosenOne;
		for(i=0;i<5;i++){
			if(bandas[i].ranking == TheChosenOne){
			cout << "Banda: " << bandas[i].banda << endl;
			cout << "Tipo: " << bandas[i].tpmusica << endl;
			cout << "integrantes: " << bandas[i].integrantes << "\n" << endl;
			}
		}
}

void Selecaodotipo(){
		char Tipopro[11];
		
		cout << "Qual eh o tipo de musica que vc procura?  ";
		cin >> Tipopro;
		for(i=0;i<5;i++){
			if(!(strcmp(bandas[i].tpmusica, Tipopro))){
			cout << "Banda: " << bandas[i].banda << endl;
			cout << "integrantes: " << bandas[i].integrantes << endl;
			cout << "Ranking: " << bandas[i].ranking << "\n" << endl;
			}
		}
}

void EntreFavoritos(){
		char Entref[20];
		
		cout << "Qual eh a banda que vc procura?  ";
		cin >> Entref;
		for(i=0;i<5;i++){
			if(!(strcmp(bandas[i].banda, Entref))){
				cout << "a banda esta entre seus favoritos!";
				break;
			}
		}
}


int main(){
	int TheChosenOne;

	preenche();
		
	for(i=0; i<5;i++){
		cout << "Banda: " << bandas[i].banda << endl;
		cout << "Tipo: " << bandas[i].tpmusica << endl;
		cout << "integrantes: " << bandas[i].integrantes << endl;
		cout << "Ranking: " << bandas[i].ranking << "\n" << endl;	
		
	}
	Selecaonumero();
	Selecaodotipo();
	EntreFavoritos();
	
}
