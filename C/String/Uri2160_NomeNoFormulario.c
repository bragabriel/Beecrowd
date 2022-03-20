#include <stdio.h>
#include <string.h>
// Trabalha string como um todo #include <string.h>
// Trabalha string por caracter #include <ctype.h>

int main(){
	
	char frase[500];

	gets(frase);

	if(strlen(frase)<81)
		printf("YES\n");
	
	else
		printf("NO\n");
	
	return 0;
}
