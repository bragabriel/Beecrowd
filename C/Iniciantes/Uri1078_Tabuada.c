#include <stdio.h>

int main(){
	
	int n, i, resp;
	
	scanf("%d", &n);
	
	for(i=1; i<=10; i++){
		
		resp = i * n;	
		
		printf("%d x %d = %d\n", i, n, resp);
}

	return 0;
}
