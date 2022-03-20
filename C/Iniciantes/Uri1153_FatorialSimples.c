#include <stdio.h>

int main(void){
		
	int numero, resultado;
	
	scanf("%d", &numero);
	
	resultado = fatorial(numero);
	
	printf("%d\n", resultado);
	
	return 0;
}

//func

int fatorial(int x){

	int resultado;
	
	if(x == 0){
		resultado = 1;
	}
	else{
		resultado = x * fatorial(x - 1);
	}
	
	return resultado;

}
