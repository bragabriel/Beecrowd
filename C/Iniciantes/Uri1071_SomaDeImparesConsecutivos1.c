#include<stdio.h>

int main(){
	
	int num1, num2, i, aux, soma=0;
	
	scanf("%d %d", &num1, &num2);
	
	if(num1 > num2){
		aux = num1;
        num1 = num2;
        num2 = aux;	
	}
		
	if(num1 % 2 != 0){
		
		for(i = num1+2; i<num2; i++){
			if(i % 2 != 0)
				soma += i;
			}
		}
		
	else{
		for(i = num1+1; i<num2; i++){	
			if(i % 2 != 0)
				soma += i;	
		}
	}
	
	printf("%d\n", soma);
	
return 0;	
}
