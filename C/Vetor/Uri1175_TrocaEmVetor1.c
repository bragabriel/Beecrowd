#include <stdio.h>

int main(){
	
	int vet[20];
	int i, aux;
	
	for(i=0; i<=19; i++){
		scanf("%d", &vet[i]);		
	}

	for(i = 0; i<=9; i++){
		aux = vet[i];
		vet[i] = vet[19-i];
		vet[19-i] = aux;	
	}
	
	for(i=0; i<=19; i++){
		printf("N[%d] = %d\n", i, vet[i]);	
	}
	
	return 0;
}
