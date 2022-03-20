#include<stdio.h>

int main(){
	
	int x, y;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	do{
		
		if(x>y){
			printf("Decrescente\n");
		}
		else{
			printf("Crescente\n");
		}
		
		scanf("%d %d\n", &x, &y);
		
	}while(x != y);
	

	return 0;
}

