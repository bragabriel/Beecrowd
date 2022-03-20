#include <stdio.h>

int main(){
	
	int M=0, N=0, aux, i, soma;
	
	 while(1)
    {
    	aux = 0;
    	i = 0;
    	soma = 0;
    	
        scanf("%d %d", &M, &N);
        if(M<=0 || N<=0)
            break;
        else{
		
		if(N > M){
			aux = M;
			M = N; 
			N = aux;
		}
		
		for(i=N; i<=M; i++){
			printf("%d ", i);
			soma += i;
		}
		
		printf("Sum=%d\n", soma);
	}//fim else
}//fim while

return 0;
}
