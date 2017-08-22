#include <iostream>
#include <string.h>

using namespace std;

struct tAluno{
    char nome[30];
    char endereco[50];
    char matricula[10];
    char curso[30];
};

static tAluno gAlunos[100];

unsigned int consultaAlunosPorCurso(char *curso, int t, int *tol){
    int i;
    for(i=0;i<t;i++){
        if(!(strcmp(gAlunos[i].curso,curso))){
        (*tol)++;
        }
    }
}

int main(){

	int i, j=0, n, loucura = 0, tol=0;
    char procura[30];
    cout << "quantos alunos vc quer cadastrar?: ";
    cin >> n;
	j+=n;

	for(i=0;i<n;i++){
        cout << "nome: ";
        cin >> gAlunos[i].nome;
        cout << "\n" << "endereco: ";
        cin >> gAlunos[i].endereco;
        cout << "\nmatricula: ";
        cin >> gAlunos[i].matricula;
        cout << "\ncurso: ";
        cin  >> gAlunos[i].curso;
	}

        cout << "DIGITE O CURSO QUE VC QUER ENCONTRAR: ";
        cin >> procura;

        consultaAlunosPorCurso(procura, n, &tol);

        cout << tol;

}
