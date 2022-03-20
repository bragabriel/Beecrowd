#include<stdio.h>

int main(){
	
	int x, z, i=0, soma=0;
	
	scanf("%d %d", &x, &z);
	
	while(z<=x){
		scanf("%d", &z);
	}
	
		while(soma<=z){
			soma += x;
			x++;
			i++;

			if(soma>z){
				break;
			}
		}//fim while
	
	printf("%d\n", i);
	
	return 0;
}
