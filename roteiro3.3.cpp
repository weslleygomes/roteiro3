#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	char str[20], str2[20];

	printf("Digite uma string: ");
	scanf("%[^\n]", str);
	strcpy(str2, str);

	if(!strcmp(strupr(str), strupr(strrev(str2))))
		cout << "Eh palindromo" << endl;
	else
		cout << "Nao eh palindromo" << endl ;

	return 0;
}

