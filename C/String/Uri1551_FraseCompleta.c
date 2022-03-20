#include <stdio.h>
#include <string.h>
#include <ctype.h>

// tem 26 letras = completa
// não é completa, mas tem ao menos metade das letras do alfabeto = quase completa
// else: mal elaborada
	
int main(){
	
	char frase[1001];
	char letrasDiferentes[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i, k=0, tamanho, letras=0, naoletra;
	
	gets(frase);
	
	tamanho = strlen(frase);
	
	for(i=0; i<=tamanho; i++)
	{
		frase[i] = tolower(frase[i]);
		
	//	if((copy[i]=='a')||(copy[i]=='e')||(copy[i]=='i')||(copy[i]=='o')||(copy[i]=='u')) 
		for(k=0; k<=26; k++){
			if(letras==26){
				break;
			}
			if(frase[i] == letrasDiferentes[k]){
				letras++;
				break; //eh igual a letra do alfabeto = para o loop, vai para a proxima letra da frase
			}
			else{
				naoletra++;
				break;
			}
		}//fim for K
	}//fim for I

	if(letras == 26){
		printf("frase completa\n");
	}
	else if(letras>=13 && letras<26){
		printf("frase quase completa\n");
	}
	else{
		printf("frase mal elaborada\n");
	}
	
	return 0;
}
