#include <stdio.h>

int main(){
	
	int M, N, aux, i, div, num;

    aux = 0;
    i = 0;
    div = 0;
    num = 0;
    	
    scanf("%d %d", &M, &N);
    	
	if(N > M){
		aux = M;
		M = N; 
		N = aux;
	}
		
	N += 1;
	
	for(i=N; i<M; i++){
		if(i % 5 == 2 || i % 5 == 3)
		printf("%d\n", i);
	}
	
return 0;
}
