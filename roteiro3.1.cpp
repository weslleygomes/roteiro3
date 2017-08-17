#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nome[20];
    int i;

    cout << "Digite seu nome: ";
    cin .getline(nome, sizeof(nome));
    for(i=0; i<strlen(nome); i++){
        cout << nome[i] << endl;
    }
    return 0;
}
