#include <stdio.h>

int main(){
	
	int n, i, maior, pos;
		
	for(i=1; i<=100; i++){
		
		scanf("%d", &n);
	
	if(n > maior){
		maior = n;
		pos = i;
	}
}
	printf("%d\n", maior);
	printf("%d\n", pos);
		
	return 0;
}
