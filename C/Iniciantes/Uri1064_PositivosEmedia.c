#include <stdio.h>

int main(){

	float n[6], media;
	int i=0, k;
	
	for (i=0; i < 6; i++){
		
		scanf("%f", &n[i]);
		
		if(n[i]>0){
		k++;
		media+= n[i];
		}
	}

	media /= k;
	
	printf("%d valores positivos\n", k);
	printf("%.1f\n", media);
	
	return 0;
}
