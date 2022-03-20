#include <stdio.h>

int main(){
	
	float v1, v2, v3, v4, v5, v6, positivo;
	
	scanf("%f %f %f %f %f %f", &v1, &v2, &v3, &v4, &v5, &v6);
	
	if(v1 > 0)
		positivo = 1;
		
	if(v2 > 0)
		positivo = positivo + 1;
		
	if(v3 > 0)
		positivo = positivo + 1;
		
	if(v4 > 0)
		positivo = positivo + 1;
		
	if(v5 > 0)
		positivo = positivo + 1;
		
	if(v6 > 0)
		positivo = positivo + 1;
	
	printf("%.0f valores positivos\n", positivo);
	
	return 0;
}
