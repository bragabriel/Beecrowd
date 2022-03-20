#include<stdio.h>

int main(){
	
	int idade, maior;
	double media, cont, soma;
	
	maior = -1;
	cont = 0;
	soma = 0;
		
	while(scanf("%d", &idade) && (idade > maior)){
		
		soma = soma + idade;		
	
		cont = cont + 1;	
		
}//Fim while
	
	media = soma / cont;
				
	printf("%.2lf\n", media);
		
return 0;	
}
