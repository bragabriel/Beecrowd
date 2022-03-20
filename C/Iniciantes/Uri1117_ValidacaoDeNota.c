#include<stdio.h>

int main(){
	
	double nota1, nota2, media;
	
	scanf("%lf", &nota1);
	
	while(nota1 < 0 || nota1 > 10){
		printf("nota invalida\n");
		scanf("%lf", &nota1);	
}//Fim while

	scanf("%f", &nota2);
	
	while(nota2 < 0 || nota2 > 10){
		printf("nota invalida\n");
		scanf("%lf", &nota2);	
}//Fim while

	media = (nota1 + nota2) / 2;

	printf("media = %.2lf", media);
	
	return 0;
}

