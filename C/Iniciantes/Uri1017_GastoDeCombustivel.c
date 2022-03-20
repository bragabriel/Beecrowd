#include <stdio.h>
#include <math.h>

int main(){
	
	float litros, distancia;
	int tempo, vm;
	
	scanf("%d %d", &tempo, &vm);

	distancia = vm * tempo;
	litros = distancia/12;
	
	printf("%.3f\n", litros);
	
	return 0;
}
