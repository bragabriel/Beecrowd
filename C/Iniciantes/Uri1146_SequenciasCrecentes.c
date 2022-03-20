#include<stdio.h>

int main(){
	
	int x, i;
	
	scanf("%d", &x);
	
	do{
		for(i = 1; i < x; i++){
			
			printf("%d ", i);
						
		}
	printf("%d\n", i);
	scanf("%d", &x);
		
	}while(x != 0);
	

	return 0;
}

