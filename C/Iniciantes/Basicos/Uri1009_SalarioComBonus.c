#include<stdio.h>

int main(){
	
	double sal, vendas, total;
	char nome[10];
	
	scanf("%s", &nome);
	scanf("%lf %lf", &sal, &vendas);
	
	total = sal + (0.15 * vendas);
	
	printf("TOTAL = R$ %.2lf\n", total);
		
	return 0;
}
