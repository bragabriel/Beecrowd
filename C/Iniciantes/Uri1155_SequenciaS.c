#include <stdio.h>

int main(){
	
	double S;
	int i;
	
	S = 1;
	
	for(i=2; i<100; i++){
		S += (1/i);
	}
	
	return 0;
}
