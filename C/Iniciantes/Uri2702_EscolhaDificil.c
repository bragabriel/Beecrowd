#include<stdio.h>

int main(){
	
	int frangoDisp, bifeDisp, massaDisp, frangopedido, bifepedido, massapedido, refeicoesFaltantes=0;
	
	scanf("%d %d %d", &frangoDisp, &bifeDisp, &massaDisp);
	scanf("%d %d %d", &frangopedido, &bifepedido, &massapedido);
	
	if(frangoDisp < frangopedido)
		refeicoesFaltantes += frangopedido - frangoDisp;
		
	if(bifeDisp < bifepedido)
		refeicoesFaltantes += bifepedido - bifeDisp;
		
	if(massaDisp < massapedido)
		refeicoesFaltantes += massapedido - massaDisp ;

	printf("%d\n", refeicoesFaltantes);

	return 0;
}

