#include<stdio.h>

int main(){
	
	int a1, a2, a3, tempo, menorTempo;
	
	scanf("%d", &a1);
	scanf("%d", &a2);
	scanf("%d", &a3);
	
	//Primeiro andar
	tempo = a2*2 + a3*4;
	menorTempo = tempo;
	
	//Segundo andar
	tempo = a1*2 + a3*2;
	if(tempo<menorTempo){
		menorTempo = tempo;	
	}
	
	//Terceiro andar
	tempo = a1*4 + a2*2;
	if(tempo<menorTempo){
		menorTempo = tempo;
	}
	
	printf("%d\n", menorTempo);

	return 0;
}

