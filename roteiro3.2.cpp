#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nome[20];
    int i, j;

    cout << "Digite seu nome: ";
    cin .getline(nome, sizeof(nome));

    for(i=0; i<strlen(nome); i++){
        for(j=0; j<=i; j++){
            cout << nome[j];
        }
        cout << endl;
    }
    return 0;
}
