#include <stdio.h>

int main(){
	
	int N, i, k=0, result=0;
	
	scanf("%d", &N);
	
	for(i=0; i<(N/2); i++){
			
		if(N%2==0){
			k += 2;
			result = k * k;
			printf("%d^2 = %d\n", k, result);	
		}
		else{
			N -= 1;
			k += 2;
			result = k * k;
			printf("%d^2 = %d\n", k, result);
		}
	} 	
	
	return 0;
}
