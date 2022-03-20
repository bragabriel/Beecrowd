#include <stdio.h>

int main(){
	
	int N, i=0, a;
	
	scanf("%d", &a);
	
	for(i=1; i<=a; i++){
	
	scanf("%d", &N);
		
		if(N % 2 == 0 && N>0)
			printf("EVEN POSITIVE\n");
			
		else if(N % 2 != 0 && N>0)
			printf("ODD POSITIVE\n");
		
		else if(N % 2 == 0 && N<0)
			printf("EVEN NEGATIVE\n");
			
		else if(N % 2 != 0 && N<0)
			printf("ODD NEGATIVE\n");
			
		else if(N==0)
			printf("NULL\n");
	}
	
	return 0;
}
