#include <stdio.h>

int main(){
	
	int cod=0, ga=0, die=0, al=0;
	
	do{
	scanf("%d", &cod);
	
	switch(cod){
		case 1: al++;
		break;
		
		case 2: ga++;
		break;
		
		case 3: die++;
		break;
	}	
		
	if(cod==4){
		break;
	}	
	}while(cod>=1 || cod<=4);
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", al);
	printf("Gasolina: %d\n", ga);
	printf("Diesel: %d\n", die);
	
	return 0;
}
