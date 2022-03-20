#include <stdio.h>

int main(){
	
	int n, menor=100, pos, i;
	
	scanf("%d", &n);
	
	int vet[n];
	
	for(i=0; i<n; i++){
		
		scanf("%d", &vet[i]);
		
		if(vet[i]<menor){
			menor = vet[i];
			pos = i;
		}
		
	}
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);
	
	return 0;
}
