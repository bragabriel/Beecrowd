#include<stdio.h>

int main(){
	
	int numeros;
	int par[5];
	int impar[5];
	int i, j = 0, k = 0, a, b;
	
	for(i=0; i<=14; i++){
		scanf("%d", &numeros);	
	
	if(numeros % 2 == 0){
		par[j] = numeros;
		j++;//j = par
		if(j==5){
			for(a=0; a<5; a++){
			printf("par[%d] = %d\n", a, par[a]);
			}
			j=0;
		}
	}
	
	else{
		impar[k] = numeros;
		k++;//k = impar
		if(k==5){
			for(b=0; b<5; b++){
			printf("impar[%d] = %d\n", b, impar[b]);
			}
			k=0;
		}
	}
}

		for(i=0; i<k; i++){
			printf("impar[%d] = %d\n", i, impar[i]);
		}

		for(i=0; i<j; i++){
			printf("par[%d] = %d\n", i, par[i]);
		}
			
	return 0;
}
