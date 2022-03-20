#include <stdio.h>

int main(){
	
	int N, x, in=0, out=0, i;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%d", &x);
			if(x>=10 && x<=20)
				in += 1;
			else
				out += 1;
	} 	
	
	printf("%d in\n", in);
	printf("%d out\n", out);
	
	return 0;
}
