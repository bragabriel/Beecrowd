#include<stdio.h>

int main(){
	
	int N, i, vlr1 = 1, vlr2= 2, vlr3 = 3;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		
	printf("%d %d %d PUM\n", vlr1, vlr2, vlr3);
		
		vlr1 += 4;
		vlr2 += 4;
		vlr3 += 4;		
	}

	return 0;
}

